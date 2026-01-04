// 자료형 축소.c
#include <stdio.h>

int main() {
    float num1 = 11.0f;
    float num2 = 5.0f;

    int num3 = num1 / num2; // 실수에서 실수를 나누어 2.2가 나왔지만
                            // 정수 자료형에서 2만 저장되었고 0.2는 버려짐

    printf("%d\n", num3); // 2

    char num4 = 28;
    int num5 = 1000000002;

    char num6 = num4 + num5; // char보다 큰 숫자는 저장할 수 없음
                             // 28 + 2만 남고 앞 자리수는 버려짐

    printf("%d\n", num6); // 30

    return 0;
}