// 자료형의 메모리 크기.c
#include <stdio.h>

int main() {
    int num1 = 0;
    int size;

    size = sizeof num1; // 변수 num1의 자료형 크기를 구함

    printf("num1의 크기: %d\n", size);

    int num2 = 0;
    int size2;

    size2 = sizeof(num1);

    printf("num2의 크기: %d\n", num2);

    printf("char: %zu, short: %zu, int: %zu, long: %zu, long long: %zu\n",
        sizeof(char), // 1: sizeof로 char 자료형의 크기를 구함
        sizeof(short), // 2: sizeof로 short 자료형의 크기를 구함
        sizeof(int), // 3: sizeof로 int 자료형의 크기를 구함
        sizeof(long), // 4: sizeof로 long 자료형의 크기를 구함
        sizeof(long long) // 5: sizeof로 long long 자료형의 크기를 구함
    );

    return 0;
}