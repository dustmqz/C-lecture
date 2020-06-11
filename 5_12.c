// 5.12 함수의 인수와 매개변수

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void draw(int n); // ANSI function prototype declaration

int main()
{
  int i = 5;
  char c = '3'; // 35
  float f = 7.1f
  
  draw(i);
  draw((int)c); // 의도 명확하게 형변환 해주기!
  draw((int)f);
  
  /* Arguments vx. Parameters /*
  // actual argument, actual parameter -> argument (values)
  // formal argument, formal parameter -> parameter (variables)
  
  return 0;
}

void draw(int n) // -> 어떤 변수가 와도 숫자로 인식해야 되니까 파라미터 화 되어있다 라고 생각 변하기 쉬운 ㅇㅇ 변수 자체가 
{
  //TODO: print stars(asterisks)
  // 직접 해봐 는 못함 ㅋ 어려버...
  while (n-- > 0)
    printf("*");
  printf("\n");
}
