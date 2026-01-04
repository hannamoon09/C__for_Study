// for 반복문으로 무한 루프 만들기.c
#include <stdio.h>

int main() {
    for (;;) { // 초깃값, 조건식, 변화식을 모두 생략하면 무한 루프
        printf("Hello, World!\n");
    }

    return 0;
}