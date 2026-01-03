// switch에서 판별할 수 있는 자료형 알아보기.c
#include <stdio.h>

int main() {
    char c1;

    scanf("%c", &c1); // 값을 입력받음

    switch (c1) { // c1의 값에 따라 분기
        case 'a':
            printf("a입니다.\n");
            break;
        case 'b':
            printf("b입니다.\n");
            break;
        default:
            printf("default\n");
            break;
    }

    return 0;
}