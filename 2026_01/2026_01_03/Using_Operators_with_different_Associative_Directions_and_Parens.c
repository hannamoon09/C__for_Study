// 결합 방향이 다른 연산자와 괄호 사용하기.c
#include <stdio.h>

int main() {
    int num1;
    int num2 = 3;

    num1 = 10 + 2 / (5 - 3) * ++num2; // 괄호와 증가 연산자를 먼저 계산

    printf("%d\n", num1); // 14

    return 0;
}