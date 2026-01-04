// 나머지 연산.c
#include <stdio.h>
#include <math.h>

int main() {
    printf("%d\n", 1 % 3); // 1: 1을 3으로 나누면 몫은 0 나미저는 1
    printf("%d\n", 2 % 3); // 2: 2를 3으로 나누면 몫은 0 나머지는 2
    printf("%d\n", 3 % 3); // 0: 3을 3으로 나누면 몫은 1 나머지는 0
    printf("%d\n", 4 % 3); // 1: 4를 3으로 나누면 몫은 1 나머지는 1
    printf("%d\n", 5 % 3); // 2: 5를 3으로 나누면 몫은 1 나머지는 2
    printf("%d\n", 6 % 3); // 0: 6을 3으로 나누면 몫은 2 나머지는 0

    // 실수의 나머지 연산은 fmod, fmodf, fmodl 함수를 사용
    
    double num1 = 10.843;
    double num2 = 3.79;
    printf("%f\n", fmod(num1, num2)); // 3.263000

    float num3 = 10.843f;
    float num4 = 3.79f;
    printf("%f\n", fmodf(num3, num4)); // 3.263000

    long double num5 = 10.843l;
    long double num6 = 3.79l;
    printf("%Lf\n", fmodl(num5, num6)); // 3.263000

    return 0;
}