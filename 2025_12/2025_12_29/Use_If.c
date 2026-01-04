// 사용 If.c
#include <stdio.h>

int main() {
    int num1 = 10;

    if (num1 == 10) { // num1이 10이면
        printf("10입니다.\n"); // "10입니다."를 출력
    }

    int num2 = 5;

    if (num2 == 10)
        printf("if 조건문\n"); // if문에서 중괄호를 생략하면 첫 번째 줄만 실행됨
        printf("10입니다.\n"); // 중괄호가 없으므로 if의 결과와는 관계 없이 항상 실행됨

    return 0;
}