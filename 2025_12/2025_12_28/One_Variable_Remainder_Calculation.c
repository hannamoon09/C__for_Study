// 한 변수 곱셈 나눗셈.c
#include <stdio.h>

int main() {
    int num1 = 7;

    num1 = num1 % 2; // num1에 2를 나눈 뒤 나머지를 구하여 다시 num1에 저장

    printf("%d\n", num1); // 1

    int num2 = 7;

    num2 %= 2; // num2에 2를 나눈 뒤 나머지를 구하여 다시 num2에 저장

    printf("%d\n", num2); // 1

    return 0;
}