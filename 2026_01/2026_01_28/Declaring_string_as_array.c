// 배열 형태로 문자열 선언하기.c
#include <stdio.h>

int main() {
    char s1[10] = "Hello"; // 크기가 10인 char형 배열을 선언하고 문자열 할당. 선언 후 할당은 불가능

    printf("%s\n", s1); // Hello: %s로 문자열 출력

    char s2[] = "Hello"; // 문자열을 할당할 때 배열의 크기를 생략하는 방법

    printf("%s\n", s2); // Hello: %s로 문자열 출력

    return 0;
}