// 3.9 고정 너비 정수
// 예를 들어서 int 값이 4바이트 일 줄 알았는데 다른 시스템에서 int 가 2바이트였다면? 오버플로우 문제가 발생 이런 것을 방지하기 위함

#include <stdio.h>
#include <stdint.h> // also included in inttypes.h   이런거 써야 아래있는 int32_t 이런거 쓸 수 있음
#include <inttypes.h>   // 이거 쓰면 위에 #include <stdint.h> 이거 안써도 됨 이미 포함되어 있음 ㅇㅇ 이건 printf 이거 쓸때 %뒤에 뭐붙여야되는지 그거 호환용임 ㅇㅇ

int main()
{
    int i;
    int32_t i32;                    // 32 bit integer            이 변수를 32비트로 고정시켜버림
    int_least8_t i8;                // smallest 8 bit            적어도 8비트를 가지고 있는 가장 작은 타입으로 변수를 선언해줌
    int_fast8_t f8;                 // fastest minimum            뭔지 모르겠음 8비트중 가장 빠른 변수라는데 가장 빠른게 뭐임 ㅋㅋ
    intmax_t imax;                  // biggest signed integers   
    uintmax_t uimax;                // biggest unsigned integers
    
    i 32 = 1004;
    
    printf("me32 = %d\n", i32);
    printf("me32 = %"  "d"  "\n", i32);
    printf("me32 = %" PRID32 "\n", i32); //PRID32 해석 -> PRI:print D32: decimal 32Byte 
    //그러니까 32비트짜리 고정 너비 정수를 출력하려면 %에다가 D를 쳐줘야 된다. %d가 되야 한다. 이런 뜻임 
    // % = format specifier
    
    return 0;
}
