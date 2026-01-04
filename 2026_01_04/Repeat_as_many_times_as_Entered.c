// 입력한 횟수대로 반복하기.c
#include <stdio.h>

int main() {
    int count1;

    scanf("%d", &count1); // 값을 입력받음

    for (int i = 0; i < count1; i++) { // 0부터 입력받은 값보다 작을 때까지 반복
        printf("Hello, World! %d\n", i);
    }

    int count2;

    scanf("%d", &count2); // 값을 입력받음

    for (int i = count2; i > 0; i--) { // 입력받은 값을 감소시키면서 반복
        printf("Hello, World! %d\n", i);
    }

    int count3;

    scanf("%d", &count3); // 값을 입력받음

    for (; count3 > 0; count3--) { // 입력받은 값을 감소시키면서 반복
        printf("Hello, World! %d\n", count3);
    }

    return 0;
}