// while 반복문으로 무한 루프 만들기.c
#include <stdio.h>
#include <stdbool.h> // bool, true, false가 정의된 헤더 파일

int main() {
    while (1) {
        printf("Hello, World!\n");
    }

    while (true) { // while에 true를 지정하면 무한 루프
        printf("Hello, World!\n");
    }

    return 0;
}