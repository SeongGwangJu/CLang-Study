#include "exam2-3.h"    //사용자 헤더파일 exam2-3.h를 포함

/* 사용자 헤더 파일 exam2-3.h에 stdio.h 파일을 포함시켰으므로 다시 stdio.h를 포함해 줄 필요 없음 */

void main() {                                           // return이 없는 main 함수 정의
    int add_result, sub_result;                         // 정수형 변수 선언
    printf("10과 5를 더하면 %d이다. \n", ADD(10,5)); // 헤더에 정의한 ADD 매크로 사용 및 출력
    printf("10에서 5를 빼면 %d이다. \n", SUB(10,5)); // 상동
}