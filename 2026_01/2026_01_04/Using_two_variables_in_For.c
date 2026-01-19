// for 반복문에서 변수 두 개 사용하기.c
#include <stdio.h>

int main() {
    for (int i = 0, j = 0; i < 10; i++, j += 2) { // i는 1씩 증가, j는 2씩 증가
        printf("i: %d, j: %d\n", i, j);
    }

    return 0;
}