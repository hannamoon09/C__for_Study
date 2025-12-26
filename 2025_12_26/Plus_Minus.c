// 덧셈 뺄셈.c
#include <stdio.h>

int main() {
    int num1;
    int num2;

    num1 = 1 + 2;
    num2 = 1 - 2;

    printf("%d\n", num1); // 3
    printf("%d\n", num2); // -1

    float num3;
    float num4;

    num3 = 1.0f + 0.456789f; // 1.0에 0.456789를 더해서 num3에 저장
    num4 = 1.0f - 0.456789f; // 1.0에 0.456789를 빼서 num4에 저장

    printf("%f\n", num3); // 1.456789
    printf("%f\n", num4); // 0.543211

    return 0;
}