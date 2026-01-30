// 문자열을 여러 개 입력받기.c
#include <stdio.h>

int main() {
    char s1[10]; // 크기가 10인 char형 배열을 선언
    char s2[10]; // 크기가 10인 char형 배열을 선언

    printf("문자열을 두 개 입력하세요: ");
    scanf("%s %s", s1, s2); // 표준 입력에서 공백으로 구분된 문자열 두 개를 입력받음

    printf("%s\n", s1); // s1의 내용을 출력
    printf("%s\n", s2); // s2의 내용을 출력

    return 0;
}