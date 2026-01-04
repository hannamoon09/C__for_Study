// 많은 조건문.c
#include <stdio.h>

int main() {
    int num1 = 10;
    int num2 = 20;

    if (num1 == 10 && num2 == 20) 
        printf("참\n");
    else
        printf("거짓\n");

    if (num1 == 10) {
        if (num2 == 20) {
            printf("참\n");
        }
        else {
            printf("거짓\n");
        }
    } else {
        printf("거짓\n");
    }

    return 0;
}