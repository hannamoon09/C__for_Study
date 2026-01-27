// 문자열 포인터에서 인덱스로 문자에 접근하기.c
#include <stdio.h>

int main() {
    char *s1 = "Hello"; // 포인터에 문자열 Hello의 주소 저장

    printf("%c\n", s1[1]); // e: 인덱스 1(두 번째)의 문자 출력
    printf("%c\n", s1[4]); // o: 인덱스 4(다섯 번째)의 문자 출력
    printf("%c\n", s1[5]); // 문자열 맨 뒤의 NULL(\0) 출력. NULL은 화면에 표시되지 않음

    char *s2 = "Hello"; // 포인터에 문자열 Hello의 주소 저장
                        // Hello가 있는 메모리 주소는 읽기 전용

    s2[0] = 'A'; // 문자열 포인터의 인덱스 0에 문자 A를 할당
                 // 실행 에러

    printf("%c\n", s2[0]);

    return 0;
}