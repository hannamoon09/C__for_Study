// 역참조 연산자 사용하기.c
#include <stdio.h>

int main() {
    int *numPtr1; // 포인터 변수 선언
    int num1 = 10; // 정수형 변수를 선언하고 10 저장

    numPtr1 = &num1; // num1의 메모리 주소를 포인터 변수에 저장

    printf("%d\n", *numPtr1); // 10: 역참조 연산자로 num1의 메모리 주소에 접근하여 값을 가져옴

    int *numPtr2; // 포인터 변수 선언
    int num2 = 10; // 정수형 변수를 선언하고 10 저장

    numPtr2 = &num2; // num2의 메모리 주소를 포인터 변수에 저장

    *numPtr2 = 20;

    printf("%d\n", *numPtr2); // 20: 역참조 연산자로 메모리 주소에 접근하여 값을 가져옴
    printf("%d\n", num2); // 20: 실제 num1의 값도 바뀜

    return 0;
}