#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
    double R = 2.50 * pow(10, 2);
    double L = 0;
    double C = 0;
    double Xl = 0;
    double Xc = 0;
    double f = 60.0;
    double I_max = 0;
    double V_max = 1.50 * pow(10, 2);
    double Z = 0;
    double VR_max = 0;
    double VL_max = 0;
    double VC_max = 0;

    printf("L, C 를 입력하세요 : ");
    scanf("%lf %lf", &L, &C);

    C *= pow(10, -6);
    Xl = 2 * 3.141592 * f * L;
    Xc = 1 / (2 * 3.141592 * f * C);
    printf("XL = %.0lfΩ, Xc = %.0lfΩ\n", Xl, Xc);

    Z = sqrt(pow(R, 2) + pow((Xl - Xc), 2));
    I_max = V_max / Z;
    printf("이 회로의 임피던스 = %.0lfA\n", Z);
    printf("전류와 전압 사이의 위상각 = %.1lf\n", atan((Xl - Xc) / R) * (180.0 / 3.141592));

    VR_max = I_max * R;
    VL_max = I_max * Xl;
    VC_max = I_max * Xc;
    printf("VR_max = %.1lfV\n", VR_max);
    printf("VL_max = %.1lfV\n", VL_max);
    printf("VC_max = %.0lfV\n", VC_max);

    return 0;
}
