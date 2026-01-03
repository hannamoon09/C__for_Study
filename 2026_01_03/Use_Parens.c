// 괄호 사용하기.c
#include <stdio.h>

int main() {
    int num1;

    num1 = 35 + 1 * 2; // 1 * 2가 먼저 계산되므로 35 + 2가 됨

    printf("%d\n", num1); // 37

    int num2;

    num2 = (35 + 1) * 2; // 괄호를 사용하여 35 + 1을 먼저 계산한 뒤 2를 곱함

    printf("%d\n", num2); // 72

    return 0;
}