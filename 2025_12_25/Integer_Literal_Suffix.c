// 정수 리터럴 접미사.c
#include <stdio.h>

int main() {
    printf("%ld\n", -10L); // long 크기의 정수 리터럴
    printf("%lld\n", -1234567890123456789LL); // long long 크기의 정수 리터럴

    printf("%u\n", 10U); // unsigned int 크기의 정수 리터럴
    printf("%lu\n", 1234567890UL); // unsigned long 크기의 정수 리터럴

    printf("%lu\n", 10UL); // unsigned long 크기의 정수 리터럴
    printf("%llu\n", 1234567890123456789ULL); // unsigned long long 크기의 정수 리터럴

    printf("0%lo\n", 017L); // long 크기의 8진 정수 리터럴
    printf("0%lo\n", 017UL); // unsigned long 크기의 8진 정수 리터럴
    printf("0x%lX\n", 0x7FFFFFL); // long 크기의 16진 정수 리터럴
    printf("0x%lX\n", 0xFFFFFFFFUL); // unsigned long 크기의 16진 정수 리터럴

    return 0;
}