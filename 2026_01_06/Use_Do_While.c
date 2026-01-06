// do while 반복문 사용하기.c
#include <stdio.h>

int main() {
    int i = 0;

    do { // 처음 한 번 아래 코드가 실행됨
        printf("Hello, World! %d\n", i); // Hello, World!와 i의 값을 함께 출력
        i++; // i를 1씩 증가시킴
    }
     while(i < 100); // i가 100보다 작을 때 반복. 0부터 99까지 증가하면서 100번 반복

    int j = 0;

    // do에 해당하는 부분
    printf("Hello, World! %d\n", j); // 처음 한 번은 실행
    j++; // 처음 한 번은 실행

    while (j < 100) { // j가 100보다 작을 때 반복. 0부터 99까지 증가하면서 100번 반복
        printf("Hello ,World! %d\n", j); // Hello, World!와 j의 값을 함께 출력
        j++; // j를 1씩 증가시킴
    }

     return 0;
}