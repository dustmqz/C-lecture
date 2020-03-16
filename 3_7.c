/* 3.7 다양한 정수형들 
()안의 것들은 생략 가능
                                  크기                                    형식 지정자 (%d 처럼 %뒤에 뭐붙여야 하는지)
 (signed) char                    1Byte                                    hhu(숫자) or c(문자)  
 unsigned char                    1Byte                                    hhu(숫자) or c(문자)  
 (singed) short (int)             2Byte                                      hd
 unsigned short (int)             2Byte                                      hu  
 signed (int) or (singed) int     (2Byte)옛날하드웨어 or 4Byte               d or i
 unsigned (int)                   (2Byte)옛날하드웨어 or 4Byte                 u   
 long (int)                       4Byte  - 거의 안쓰임                        ld
 unsigned long (int)              4Byte  - 거의 안쓰임                        lu  
 long long (int)                  8Byte                                      lld
 unsigned long long (int)         8Byte                                      llu
 
 */
 
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main()
{
    char c = 65;
    short s = 200;
    unsigned int ui = 3000000000U; // 3'000'000'000U 숫자 뒤에 U가 붙는건 unsigned 에 맞는 리터럴을 표시해주기 위함
    long l = 65537L;               // 숫자 뒤에 L 이 붙는 것도 똑같은 느낌 
    long long ll = 12345678908642LL; // 12'345'678'908'642ll 숫자 뒤에 ll 붙는것도 long long에 맞는 리터럴 
                                      // 리터럴 생략해도됨 숫자 쓸때 ' 붙여서 쓰는거 c++에서 가능인데 c는 안됨 gcc컴파일러 쓰면 에러남 비쥬얼 스튜디오 쓸때는 된다나 뭐라나 
    printf("char = %hhd, %d, %c\n", c, c, c);    //%c는 문자로 출력을 해주는데 문자열에 대해서는 다음에 공부
    printf("short = %hhd, %hd, %d\n", s, s, s);
    printf("unsigned int = %u, %d \n", ui, ui);
    printf("long = %ld, %hd\n", l, l);
    printf("long long = %lld, %ld\n", ll, ll);
    
    return 0;
}










  
 
