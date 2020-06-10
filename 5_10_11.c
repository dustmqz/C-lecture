// 5.10 순서도
// 안중요함 ㅋ 그냥 넘김

// 5.11 자료형 변환
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
  /* promotions in assignments */
  short s = 64;
  int i = s;
  
  float f = 3.14f;
  double d = f;  
  //작은거을 큰 거에 집어넣는 거니까 가능
  
  /* demotion in assignments */
  d = 1.25; // (double임)
  f = 1.25; // (뒤에 f 없으니까 이건 double) https://dojang.io/mod/page/view.php?id=46
  f = 1.123; // float는 뒤에 f 안붙여주면 안됨. 숫자 뒤에 아무것도 안붙이면 double로 인식함. ㅇㅇ
  
  // 위에까지 실행시키면 오류뜸 ㅇㅇ  f 는 float 인데 double 을 집어넣으려고 드니까 오류뜸 이게 demotion 
  // 근데 왜 f = 1.25 이거는 오류가 안나나면 1.25 는 부동소수점으로 표현이 가능한 정밀하게 표현할 수 있는 숫자라서 그럼
  // float 로도 정밀하게 표현 할 수 있다는거지 
//========================================== 
   
  /* ranking of types in operations */
  // long double > double > float  정수형은 실수형보다 랭킹이 낮다. 실수가 짱임
  // unsigned long long, long long
  // unsigned long, long
  // unsigned, int
  // short int, unsigned short int
  // signed char, char, unsigned char
  // _Bool
  //Ref: Google 'Integer conversion rank'
  d = f + 1.234; // 이러면 float 와 double 을 못더하니까 float 를 double 로 바꾸고 더함
  f = f + 1.234; // conversion from 'double' to 'float', possible loss of data. 계산 결과값 double 을 float에 넣으려고 하니까 오류남
  
  /* automatic promotion of function argument */
  // 1. functions without prototypes
  // 2. Variadic functions (ellipsis)
  // 크게 신경 쓰지 말자 1번은 옛날 c언어에 쓰던거고 2번은 고급 프로그래밍에서 쓴대
  
  /* casting operators */ // casting operator 프로그래머의 의도를 명확하게 해준다.
  /* d = (double)3.14f; // 3.14앞에 괄호하고 더블 있어서 결국에 더블임
  i = 1.6 + 1.7; // 실수 + 실수 인데 int i 여가지구 절삭떠서 3임
  i = (int)1.6 + (int)1.7; */ // 앞에 (int) 붙여서 1+1 돼서 2임
  
  /* more examples */
  char c;
  //int i;
  // float f; 
  f = i = c = 'A'; // 65 아스키코드 ㅇㅇ 실행하면 int를 float 에 넣어서 데이터 손실 경고 뜸
  printf("%c %d %f\n", c, i, f);
  c = c + 2; // 'C', 67에 해당하는 아스키코드가 c 니까 char c 문자열이니까 c 나오겠지
  i = f + 2 * c; // 65.0f + 2 * 67 float 에다가 int 더할라고하니까 int를 float 로 변환하고
                 // 더하고 int에 넣으려고 하니까 데이터 손실 있을 수 있다고 경고뜸
  c = 1106; // demolition, 1106 = 0b10001010010, 0b01010010(char타입이 1바이트라서 앞에부분 짤라버림) = 1106 % 256 = 82 = 'R' 그래서 82 라서 R임
  printf("%c\n", c);
  c = 83.99;
  printf("%c\n", c);
  
  return 0;
}
  


  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
