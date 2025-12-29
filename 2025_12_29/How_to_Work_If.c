// If 조건문 동작 방식.c
#include <stdio.h>

int main() {
    if (2) 
        printf("참\n");
    else
        printf("거짓\n");

    int num1 = 5;

    if (num1 = 10) // num1에 10을 할당. 0 이외의 숫자는 참이므로 10은 참
        printf("10입니다.\n");

    return 0;
}