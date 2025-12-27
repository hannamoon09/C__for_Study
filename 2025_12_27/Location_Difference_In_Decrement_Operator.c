// 위치 차이점 증감 연산자.c
#include <stdio.h>

int main() {
    int num1 = 2;
    int num2 = 2;
    int num3;
    int num4;

    num3 = num1++; // num1의 값을 num3에 할당한 뒤 num1의 값을 1 증가시킴
    num4 = num2--; // num2의 값을 num4에 할당한 뒤 num2의 값을 1 감소시킴

    printf("%d %d\n", num3, num4); // 2 2

    int num5 = 2;
    int num6 = 2;
    int num7;
    int num8;

    num7 = ++num5; // num5의 값을 1 증가시킨 뒤 num7을 할당
    num8 = --num6; // num6의 값을 1 감소시킨 뒤 num8을 할당

    printf("%d %d\n", num7, num8); // 3 1

    int num9 = 2;
    int num10 = 2;

    printf("%d %d\n", num9++, num10--); // 2 2: num9, num10의 값을 먼저 출력한 뒤 증감 연산자 동작
    printf("%d %d\n", num9, num10); // 3 1: 증감 연산자가 동작한 결과

    int num11 = 2;
    int num12 = 2;

    printf("%d %d\n", ++num11, --num12); // 3 1: 증감 연산자가 먼저 동작한 뒤 num11, num12의 값을 출력
    printf("%d %d\n", num11, num12); // 3 1: 앞과 같은 값이 출력됨

    return 0;
}