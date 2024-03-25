#include <stdio.h>                      // 표준 입출력 함수 printf를 사용하기 위해 필요한 헤더 파일 stdio.h 포함
#define IN "원의 반지름은 100입니다. \n"    // 반지름을 말해주는 문자열 IN 매크로 정의
#define PI 3.1415926535                 // 원주율 값 상수 PI 매크로 정의
#define AREA(X) (PI*(X)*(X))            // 넓이를 계산하는 AREA 매크로 정의
#define OUT printf("원의 면적을 구하고 프로그램을 종료합니다. \n") // 종료 안내 문자열 출력문 OUT 매크로 정의

void main()
{
    /* 각각의 매크로 출력 또는 실행 */
    printf("%s \n", IN);
    printf("원의 면적은 %10.5f입니다. \n\n", AREA(100));
    OUT;
}