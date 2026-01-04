// If와 논리 연산자 사용하기.c
#include <stdio.h>

int main() {
    int num1 = 1;
    int num2 = 0;

    if (num1 & num2) // num1과 num2가 모두 참인지 검사
        printf("참\n");
    else
        printf("거짓\n"); // num1만 참이므로 거짓이 출력됨

    if (num1 | num2) // num1과 num2 둘 중 하나가 참인지 검사
        printf("참\n"); // num1이 참이므로 참이 출력됨
    else
        printf("거짓\n");

    if (!num1) // num1을 반대로 뒤집음
        printf("참\n");
    else
        printf("거짓\n"); // 참을 뒤집었으므로 거짓이 출력됨

    int num3 = 0;
    int num4 = 1;

    if (num3 & num4) // 첫 번째 값이 거짓이면 두 번째 값은 검사하지 않고 거짓으로 결정
        printf("참\n");
    else
        printf("거짓\n"); // 거짓 출력

    num3 = 1;
    num4 = 0;
    if (num3 | num4)
        printf("참\n"); // 첫 번째 값이 참이면 두 번째 값은 검사하지 않고 참으로 결정
    else
        printf("거짓\n"); // 참 출력

    return 0;
}