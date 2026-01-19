// If조건문과 bool 자료형 사용하기.c
#include <stdio.h>
#include <stdbool.h> // bool, true, false가 정의된 헤더 파일

int main() {
    if (true) // 불 true 사용
        printf("참\n"); // 참이므로 참이 출력됨
    else
        printf("거짓\n");

    if (false) // 불 false 사용
        printf("참\n");
    else
        printf("거짓\n"); // 거짓이므로 거짓이 출력됨

    return 0;
}