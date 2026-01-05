// while 반복문으로 Hello, world! 100번 출력하기.c
#include <stdio.h>

int main() {
    int i = 0;

    while (i < 100) { // i가 100보다 작을 때 반복. 0에서 99까지 증가하면서 100번 반복
        printf("Hello, World\n");
        i++; // i를 1씩 증가시킴
    }

    return 0;
}