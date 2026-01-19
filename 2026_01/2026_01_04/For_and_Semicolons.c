// for 반복문과 세미콜론.c
#include <stdio.h>

int main() {
    for (int i = 0; i < 100; i++); { // for 루프 선언문 끝에 세미콜론을 붙이면 안됨
        printf("Hello, World!\n");
    }

    return 0;
}