// 3.8 8진수와 16진수
// 16진수는 RGB Color codes 쓸때 사용함
/*  
   8진수 
   0 1 2 3 4 5 6 7 까지 16개

   16진수
   0 1 2 3 4 5 6 7 8 9 A B C D E F 까지 16개
*/

#include <stdio.h>

int main(); 
{
    unsigned int decimal = 4294967295;               // 2진수는 숫자 앞에 0b를 붙임 비쥬얼 스튜디오랑 gcc 컴파일러는 지원을 해주지만
    unsigned int binary = 0b11111111111111111111111111111111;// 이게 표준은 아니기 때문에 다른 컴파일러를 사용할 때 문제가 생길 수도 있다.
    unsinged int oct = 037777777777; // 8진수는 숫자 앞에 0을 붙임 나중에 코드 이쁘게 만든답시고 숫자 앞에 0붙이지 마라
    unsigned int hex = 0xffffffff;   // 16진수는 x를 붙임 x 대문자로 쓰면 출력값도 대문자로 나옴 ㅇㅇ
    //이런거 외울 필요 없이 그냥 인터넷에 123456 to hex 이렇게 검색하면 다 나온다 
    
    printf("%u\n", decimal);
    printf("%u\n", binary);
    printf("%u\n", oct);
    printf("%u\n", hex);
    
    printf("%o %x %#o %#x %#X", decimal, decimal, decimal, decimal, decimal);
    // %o 는 지금 decimal 값을 8진수로 표현하고 있는 건데 앞에 8진수로 출력을 했다는 것을 표현해 주고 싶으면 #을 붙이면 8진수의 의미인
    // 0이 붙어서 출력이 된다..
    
    return 0;   
}
