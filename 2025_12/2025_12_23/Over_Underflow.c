// 오버_언더플로우.c
#include <stdio.h>

int main() {
    char num1 = 128; // char에 저장할 수 있는 최댓값 127보다 큰 수를 할당 -> 오버플로우 발생
    unsigned char num2 = 256; // unsigned char에 저장할 수 있는 최댓값 255보다 큰 수를 할당 -> 오버플로우 발생

    printf("%d %u\n", num1, num2);

    char num3 = -129; // char에 저장할 수 있는 최솟값 -128보다 작은 수를 할당 -> 언더플로우 발생
    unsigned char num4 = -1; // unsigned char에 저장할 수 있는 최솟값 0보다 작은 수를 할당 -> 언더플로우 발생

    printf("%d %u\n", num3, num4);

    return 0;
}