// 문자 저장 변수.c
#include <stdio.h>

int main() {
    char c1;

    printf("문자를 입력하세요: ");
    scanf("%c", &c1);

    printf("%c\n", c1);

    printf("문자를 입력하세요: ");
    getchar();
    char c2 = getchar();

    printf("%c\n", c2);

    char c3 = 'a';

    putchar(c3);

    return 0;
}