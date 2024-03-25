#include <stdio.h>
void main(){
    /* sizeof 연산자를 사용해  여러 자료형의 크기를 바이트 단위로 출력하는 프로그램(32bit 시스템에서 실행)
     * */
    /* 1 byte */
    printf("char 자료형 크기 : %d byte\n", sizeof(char));
    printf("signed char 자료형 크기 : %d byte\n", sizeof(signed char));
    printf("unsigned char 자료형 크기 : %d byte\n", sizeof(unsigned char));
    /* 2 byte */
    printf("short 자료형 크기 : %d byte\n", sizeof(short));
    printf("short int 자료형 크기 : %d byte\n", sizeof(short int));
    printf("signed short 자료형 크기 : %d byte\n", sizeof(signed short));
    printf("signed short int 자료형 크기 : %d byte\n", sizeof(signed short int));
    printf("unsigned short 자료형 크기 : %d byte\n", sizeof(unsigned short));
    printf("unsigned short int 자료형 크기 : %d byte\n", sizeof(unsigned short int));
    /* 4 byte */
    printf("int 자료형 크기 : %d byte\n", sizeof(int));
    printf("signed int 자료형 크기 : %d byte\n", sizeof(signed int));
    printf("unsigned 자료형 크기 : %d byte\n", sizeof(unsigned));
    printf("unsigned int 자료형 크기 : %d byte\n", sizeof(unsigned int));
    printf("long 자료형 크기 : %d byte\n", sizeof(long));
    printf("long int 자료형 크기 : %d byte\n", sizeof(long int));
    printf("signed long 자료형 크기 : %d byte\n", sizeof(signed long));
    printf("signed long int 자료형 크기 : %d byte\n", sizeof(signed long int));
    printf("unsigned long 자료형 크기 : %d byte\n", sizeof(unsigned long int));
    printf("unsigned long int 자료형 크기 : %d byte\n", sizeof(unsigned long int));
    /* 8 byte */
    printf("long long 자료형 크기: %d byte\n", sizeof(long long ));
    printf("long long int 자료형 크기: %d byte\n", sizeof(long long int));
    printf("signed long long 자료형 크기: %d byte\n", sizeof(signed long long));
    printf("signed long long int 자료형 크기: %d byte\n", sizeof(signed long long int));
    printf("unsigned long long 자료형 크기: %d byte\n", sizeof(unsigned long long));
    printf("unsigned long long int 자료형 크기: %d byte\n", sizeof(unsigned long long int));
    /* 4 byte */
    printf("float 자료형 크기: %d byte\n", sizeof(float));
    /* 8 byte */
    printf("double 자료형 크기: %d byte\n", sizeof(double));
    /* 16 byte */
    printf("long double 자료형 크기: %d byte\n", sizeof(long double));
}
