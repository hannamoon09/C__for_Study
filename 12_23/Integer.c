// 정수.c
#include <stdio.h>

int main() {
    char num1 = -10; // 1바이트 부호 있는 정수형으로 변수를 선언하고 값 할당
    short num2 = 30000; // 2바이트 부호 있는 정수형으로 변수를 선언하고 값 할당
    int num3 = -1234567890; // 4바이트 부호 있는 정수형으로 변수를 선언하고 값 할당
    long num4 = 1234567890; // 4바이트 부호 있는 정수형으로 변수를 선언하고 값 할당
    long long num5 = -1234567890123456789; // 8바이트 부호 있는 정수형으로 변수를 선언하고 값 할당

    //char, short, int는 %d로 출력하고 long은 %ld, long long은 %lld로 출력
    printf("%d %d %d %ld %lld\n", num1, num2, num3, num4, num5);
    // -10, 30000 -123456789 1234567890 -1234567890123456789

    unsigned char num6 = 200; // 1바이트 부호 없는 정수형으로 변수를 선언하고 값 할당
    unsigned short num7 = 60000; // 2바이트 부호 없는 정수형으로 변수를 선언하고 값 할당
    unsigned int num8 = 4123456789; // 4바이트 부호 없는 정수형으로 변수를 선언하고 값 할당
    unsigned long num9 = 4123456789; // 4바이트 부호 없는 정수형으로 변수를 선언하고 값 할당
    unsigned long long num10 = 12345678901234567890ULL; // 8바이트 부호 없는 정수형으로 변수를 선언하고 값 할당
    // num10에 ULL 붙인 이유는 ULL을 적어서 unsigned long long임을 알려주는 부호임

    // unsigned char, unsigned short, unsigned int는 %u로 출력하고
    // unsigned long은 %lu, unsigned long long은 %llu로 출력
    printf("%u %u %u %lu %llu\n", num6, num7, num8, num9, num10);
    //200 60000 4123456789 4123456789 12345678901234567890

    return 0;
}