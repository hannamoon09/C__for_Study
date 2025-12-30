// 삼항 연산자 사용하기.c
#include <stdio.h>

int main() {
    int num1 = 5;
    int num2;

    if (num1) // num1이 참이면
        num2 = 100; // num2에 100 할당
    else  // num1이 거짓이면
        num2 = 200; // num2에 200 할당

    printf("%d\n", num2); // 100: num1이 5이므로 참. num2에는 100이 할당됨

    int num3 = 5;
    int num4;

    num4 = num3 ? 100 : 200; // num3이 참이면 num4에 100을 할당, 거짓이면 num4에 200을 할당

    printf("%d\n", num4);

    int num5 = 10;
    int num6;
    
    num6 = num5 == 10 ? 100 : 200; // num5가 10이면 num6에 100 할당, 10이 아니면 num6에 200을 할당

    printf("%d\n", num6); // 100: num5가 10이므로 num6에는 100이 할당됨

    return 0;
}