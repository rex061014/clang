/*
    연산자
    1. 산술 연산자
        +,-,*,/(사칙연산),%(나머지 값)
    2. 대입 연산자
        : 연산자 오른쪽에 있는 값을 왼쪽에 있는 변수에 대입
        (복합대입 연산자)=, +=, -+, *=, /=, %=
    3. 비교 연산자
        > : 크다
        < : 작다
        >= : 크거나 같다
        <= : 작거나 같다
        == : 같다 
        != : 다르다
*/

#include <stdio.h>

int main(void)
{
    //산술연산자
    printf("산술연산자\n");

    int num1 = 7, num2 = 3;

    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d * %d = %d\n", num1, num2, num1 * num2);
    printf("%d / %d = %d\n", num1, num2, num1 / num2);
    printf("%d %% %d = %d\n", num1, num2, num1 % num2);

    printf("\n");

    printf("대입 연산자");

    int num3 = 3, num4 = 4;
    num3 += 3;      //num3 = num3 + 3
    num4 *= 4;      //num4 = num4 + 4
    printf("num3 += 3의 결과: %d\n",num3 );
    printf("num4 *= 4의 결과: %d\n",num4 ); 



    int a = 10, b = 11;

    printf("a == b: %d\n", a == b);
    printf("a > b: %d\n", a > b);
    printf("a >= b: %d\n", a >= b);
    printf("a < b: %d\n", a < b);
    printf("a <= b: %d\n", a <= b);
    printf("a != b: %d\n", a != b);

    int result = a == b;

    printf("result: %d\n", result);



    return 0;
}