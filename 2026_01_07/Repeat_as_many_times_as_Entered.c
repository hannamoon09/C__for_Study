// 입력한 횟수대로 반복하기.c
#include <stdio.h>

int main() {
    int count;

    scanf("%d", &count); // 값을 입력받음

    int i = 1;
    while (1) { // 무한루프
        printf("%d\n", i);

        if (i == count) // i가 입력받은 값과 같을 때
            break; // 반복문을 끝냄

        i++;
    }

    return 0;
}