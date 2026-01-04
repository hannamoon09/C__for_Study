// 한 변수 곱셈 나눗셈.c
#include <stdio.h>

int main() {
    int num1 = 2;
    int num2 = 7;

    num1 = num1 * 3; // num1에 3을 곱한 뒤 다시 num1에 저장
    num2 = num2 / 2; // num2 에서 2를 나눈 뒤 다시 num2에 저장

    printf("%d\n", num1); // 6
    printf("%d\n", num2); // 3

    int num3 = 2;
    int num4 = 7;

    num3 *= 3; // num3에 3을 곱한 뒤 다시 num3에 저장
    num4 /= 2; // num4에서 2를 나눈 뒤 다시 num4에 저장

    printf("%d\n", num3); // 6
    printf("%d\n", num4); // 3

    return 0;
}