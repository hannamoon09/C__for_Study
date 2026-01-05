// 초깃값을 1부터 시작하기.c
#include <stdio.h>

int main() {
    int i = 1;
    while (i <= 100) { // i가 100보다 작거나 같을 때 반복
        printf("Hello, World! %d\n", i); // 1에서 100까지 증가하면서 100번 반복
        i++; // i를 1씩 증가시킴
    }

    return 0;
}