// 논리, 비교, 시프트 연산자에 괄호 사용하기.c
#include <stdio.h>
#include <stdbool.h>

int main() {
    bool b1;

    b1 = (false || false) & !false | false; // 논리 연산자의 우선순위는 !, &, | 순

    printf("%d\n", b1); // 0: false AND true 이므로 0
    
    int num1;

    num1 = 5 == 5 < 10; // ==보다 <의 우선순위가 높음

    printf("%d\n", num1);

    int num2 = 1;
    int num3 = 2;
    int num4;

    num4 = num2 << 2 + num3 << 1; // <<보다 +의 우선순위가 높음

    printf("%d\n", num4); // 32

    num4 = (num2 << 2) + (num3 << 1); // +보다 << 연산을 먼저하기 위해 괄호로 뮦어줌
    
    printf("%d\n", num4); // 8

    return 0;
}