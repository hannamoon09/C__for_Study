// 덧셈 뺄셈 변수.c
#include <stdio.h>

int main() {
    int num1 = 1;
    int num2 = 1;

    num1 = num1 + 2;
    num2 = num2 - 2;

    printf("%d\n", num1); // 3
    printf("%d\n", num2); // -1

    int num3 = 1; // num3에 2를 더한 뒤 다시 num3에 저장(2를 증가시킴)
    int num4 = 1; // num4에서 2를 뺀 뒤 다시 num4에 저장(2를 감소시킴)

    num3 += 2; // 3
    num4 -= 2; // -1

    printf("%d\n", num3);
    printf("%d\n", num4);

    return 0;
}