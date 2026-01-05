// 입력한 횟수대로 반복하기.c
#include <stdio.h>

int main() {
    int count1;

    scanf("%d", &count1); // 값을 입력받음

    int i = 0;
    while (i < count1) { // i가 count보다 작을 때 반복
        printf("Hello, World!, %d\n", i); // Hello, World!와 i의 값을 함께 출력
        i++; // i를 1씩 증가시킴
    }

    int count2;

    scanf("%d", &count2); // 값을 입력받음

    while (count2 > 0) { // count가 0보다 클 때 반복
        printf("Hello, World! %d\n", count2);
        count2--; // count를 1씩 감소시킴
    }

    return 0;
}