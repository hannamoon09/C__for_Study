// 변수.c
#include <stdio.h>

int main() {
    int num1; // 정수형 변수 선언
    int num2;
    int num3;

    num1 = 10; // 변수에 값 할당(저장)
    num2 = 20;
    num3 = 30;

    printf("%d %d %d\n", num1, num2, num3); // 10 20 30: 변수에 저장된 값을 %d로 출력

    int num4, num5, num6; // 변수를 콤마로 구분하여 변수 여러 개를 선언

    num4 = 10; // 변수에 값 할당
    num5 = 20;
    num6 = 30;

    printf("%d %d %d\n", num4, num5, num6); // // 10 20 30: 변수에 저장된 값을 %d로 출력

    int num7 = 10; // 변수를 선언하면서 값 할당(초기화)
    int num8 = 20, num9 = 30; // 변수 여러 개를 선언하면서 값 할당(초기화)

    printf("%d %d %d\n", num7, num8, num9);

    return 0;
}