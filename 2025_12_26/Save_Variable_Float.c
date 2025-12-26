// 실수 입력 저장.c
#include <stdio.h>

int main() {
    float num1;

    printf("실수를 입력하세요(float): ");
    scanf("%f", &num1);

    printf("%f\n", num1);

    double num2;

    printf("실수를 입력하세요(double): ");
    scanf("%lf",&num2);

    printf("%lf\n", num2); // %f로도 출력 가능

    long double num3;

    printf("실수를 입력하세요(long double): ");
    scanf("%Lf", &num3);

    printf("%Lf\n", num3);

    return 0;
}