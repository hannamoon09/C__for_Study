// 널 포인터 사용하기.c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *numPtr1 = NULL; // 포인터에 NULL 저장

    printf("%p\n", numPtr1); // 00000000

    if (numPtr1 == NULL) // numPtr1이 널 포인터라면
        numPtr1 = malloc(1024); // 1024바이트만큼 메모리 할당

    printf("%p\n", numPtr1);

    free(numPtr1); // 동적으로 할당한 메모리 해제

    return 0;
}