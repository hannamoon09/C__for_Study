// 사용자가 입력한 값에 따라 문자열 출력하기.c
#include <stdio.h>

int main() {
    int num1;

    scanf("%d", &num1); // 값을 입력받음

    switch (num1) {
        case 1: // 1일 때
            printf("1입니다.\n");
            break;
        case 2: // 2일 때
            printf("2입니다.\n");
            break;
        default: // 아무 case에도 해당되지 않을 때
            printf("default\n");
            break;
    }

    return 0;
}