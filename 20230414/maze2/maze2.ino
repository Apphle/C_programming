//////////////////// sonar ////////////////////

#include <NewPing.h>

#define SONAR_NUM 3      // Number of sensors.
#define MAX_DISTANCE 150 // Maximum distance (in cm) to ping.

#define Front 0
#define Left  1
#define Right 2

#define TRIG1 2  // 초음파 센서 1번 TRIG 핀 번호
#define ECHO1 3

#define TRIG2 4  // 초음파 센서 1번 TRIG 핀 번호
#define ECHO2 5

#define TRIG3 6  // 초음파 센서 1번 TRIG 핀 번호
#define ECHO3 7
NewPing sonar[SONAR_NUM] = {   // Sensor object array.
  NewPing(TRIG1, ECHO1, MAX_DISTANCE), // Each sensor's trigger pin, echo pin, and max distance to ping.
  NewPing(TRIG2, ECHO2, MAX_DISTANCE),
  NewPing(TRIG3, ECHO3, MAX_DISTANCE)
};

  float front_sonar = 0.0;
  float left_sonar  = 0.0;
  float right_sonar = 0.0;
  
///////////////// L298 /////////////////////////
#define ENA 8
#define IN1 9
#define IN2 10
#define IN3 11
#define IN4 12
#define ENB 13

///////////////////maze Status//////////////////
int maze_status = 0;

void setup() 
{
  // put your setup code here, to run once:

  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENB, OUTPUT);

  Serial.begin(115200);  //통신속도를 115200으로 정의함
}
void motor_A_control(int direction_a, int motor_speed_a) //모터 A의 방향(direction)과 속도(speed)제어
{
  if (direction_a == HIGH)
  {
    digitalWrite(IN1, LOW);         // 모터의 방향 제어
    digitalWrite(IN2, HIGH);
    analogWrite(ENA, motor_speed_a); // 모터의 속도 제어
  }
  else
  {
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    analogWrite(ENA, motor_speed_a);
  }
}
void motor_B_control(int direction_b, int motor_speed_b) //모터 B의 방향(direction)과 속도(speed)제어
{
  if (direction_b == HIGH)
  {
    digitalWrite(IN3, LOW);         // 모터의 방향 제어
    digitalWrite(IN4, HIGH);
    analogWrite(ENB, motor_speed_b); // 모터의 속도 제어
  }
  else
  {
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
    analogWrite(ENB, motor_speed_b);
  }
}
void check_maze_status(void)
{
if((left_sonar>= 0)&&(left_sonar <=150) && (right_sonar>= 0)&&(right_sonar <=200) && (front_sonar>= 0)&&(front_sonar <=150) )
{   // 3면이 다 막힌 경우
    maze_status = 4;
    Serial.println("maze_status = 4"); 
}
else if( (left_sonar>= 0)&&(left_sonar <=200) && (right_sonar>= 0)&&(right_sonar <=200))
{
    maze_status = 1;
    Serial.println("maze_status = 1");
}
else if((left_sonar>= 0)&&(left_sonar <=200) && (front_sonar>= 0)&&(front_sonar <=150))
{
     maze_status = 2;
    Serial.println("maze_status = 2"); 
}
else if((right_sonar>= 0)&&(right_sonar <=200) && (front_sonar>= 0)&&(front_sonar <=150))
{
     maze_status = 3;
    Serial.println("maze_status = 3"); 
}        
else
{
    maze_status = 0;
    Serial.println("maze_status = 0");
}    
}
void loop()
{
  // put your main code here, to run repeatedly:


  front_sonar = sonar[Front].ping_cm()*10;  //전방 센서 측정
  left_sonar = sonar[Left].ping_cm()*10;    //좌측 센서 측정
  right_sonar = sonar[Right].ping_cm()*10;  //우측 센서 측정
  if (front_sonar == 0.0) front_sonar = MAX_DISTANCE;     // 0.0 출력이 최대값이므로
  if (left_sonar == 0.0)  left_sonar  = MAX_DISTANCE;
  if (right_sonar == 0.0) right_sonar = MAX_DISTANCE;

  Serial.print("L:");Serial.print(left_sonar);   Serial.print("  ");
  Serial.print("F:");Serial.print(front_sonar);   Serial.print("  ");
  Serial.print("R:");Serial.println(right_sonar);

check_maze_status();

if(maze_status == 3)
{
  // 90도 회전을 한다
  motor_A_control(HIGH,0);  // 오른쪽 전진
  motor_B_control(HIGH,0);  // 왼쪽 후진
  delay(1000); 
  Serial.println("Rotate CCW");
  motor_A_control(HIGH,100);  // 오른쪽 전진
  motor_B_control(LOW,100);  // 왼쪽 후진
  delay(680);
  motor_A_control(HIGH,0);  // 오른쪽 전진
  motor_B_control(HIGH,0);  // 왼쪽 후진
  delay(1000);
}
else if (maze_status == 1)
{
  Serial.println("Rotate CCW");
  motor_A_control(HIGH,100);  // 오른쪽 전진
  motor_B_control(HIGH,100);  // 왼쪽 전진
}
else if (maze_status == 4)
{
  motor_A_control(HIGH,0);  // 오른쪽 전진
  motor_B_control(HIGH,0);  // 왼쪽 후진
  delay(1000); 
  Serial.println("Rotate CCW");
  motor_A_control(HIGH,100);  // 오른쪽 전진
  motor_B_control(LOW,100);  // 왼쪽 후진
  delay(1350);
  motor_A_control(HIGH,0);  // 오른쪽 전진
  motor_B_control(HIGH,0);  // 왼쪽 후진
  delay(1300); 
}
else if (maze_status == 2)
{
  motor_A_control(HIGH,0);  // 오른쪽 전진
  motor_B_control(HIGH,0);  // 왼쪽 후진
  delay(1000); 
  Serial.println("Rotate CCW");
  motor_A_control(LOW,100);  // 오른쪽 전진
  motor_B_control(HIGH,100);  // 왼쪽 전진
  delay(690);
  motor_A_control(HIGH,0);  // 오른쪽 전진
  motor_B_control(HIGH,0);  // 왼쪽 후진
  delay(1000); 
}

else 
{
  Serial.println("Rotate CCW");
  motor_A_control(HIGH,100);  // 오른쪽 전진
  motor_B_control(HIGH,100);  // 왼쪽 전진
}

} 
