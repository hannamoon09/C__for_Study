// while 반복문과 세미콜론.c
#include <stdio.h>

int main() {
    int i = 0;
    while (i < 100); { // while 루프 선언문 끝에 세미콜론을 붙이면 안됨
        printf("Hello, World\n");
        i++;
    }

    return 0;
}