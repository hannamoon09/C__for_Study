// for 반복문에서 중괄호 생략하기.c
#include <stdio.h>

int main() {
    for (int i = 0; i < 100; i++)
        printf("Hello, World!\n"); // 반복할 코드가 한 줄이라면 종괄호 생략

    for (int i = 0; i < 100; i++) { // 반복할 코드가 두 줄 이상이라면 중괄호로 묶어줌
        printf("for 반복문\n");
        printf("Hello, World!\n");
    }

    return 0;
}