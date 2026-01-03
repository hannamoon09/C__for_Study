// 연산자의 결합 방향 알아보기.c
#include <stdio.h>

int main() {
    int num1 = 1;
    int num2;

    num2 = ++num1; // 변수를 먼저 평가하고 앞에 있는 ++을 계산

    printf("%d\n", num2);

    return 0;
}