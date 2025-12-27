// 곱셈 나눗셈.c
#include <stdio.h>

int main() {
    int num1;
    int num2;

    num1 = 2 * 3; // 2에 3을 곱해서 num1에 저장
    num2 = 7 / 2; // 7에서 2를 나누어서 num2에 저장

    printf("%d\n", num1); // 6
    printf("%d\n", num2); // 3: 소수점을 사용하지 않고 최대한 나눌 수 있는 값이 3

    int num3 = 1;
    int num4 = 0;
    int num5;

    num5 = num3 / num4; // 1을 0으로 나눔. 실행 에러 발생 -> 에러 뜨는게 원래 맞는데 VScode가 고친듯;;

    printf("%d\n", num3);

    float num6;
    float num7;

    num6 = 2.73f * 3.81f; // 2.73에 3.81을 곱해서 num6에 저장
    num7 = 7.0f / 2.0f; // 7.0에서 2.0을 나누어서 num7에 저장 

    printf("%f\n", num6); // 10.401299
    printf("%f\n", num7); // 3.500000

    float num8 = 1.0f;
    float num9 = 0.0f;
    float num10;

    num10 = num8 / num9;

    printf("%f\n", num10); // inf: 무한대

    return 0;
}