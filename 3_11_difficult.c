// 3.11 부동소수점형 
// 뭔소린지 잘 모르겠음
// 진짜 뭔소린지 모르겠어
// 대충 우리가 쓰는 숫자들을 컴퓨터가 2진수로 나타내야 하는데 2진수로 못 나타낼 때가 있는데 그럴 때 부동소수점형을 쓰는 것 같음
// 나중에 다시 해보자..

#include <stdio.h>
#include <float.h>

int main()
{
  printf("%u\n", sizeof(float));
  printf("%u\n", sizeof(double));
  printf("%u\n", sizeof(long double));
  
  float f = 123.456f; // double 은 f 안붙여도 돼 메모리가 더 큰거 쓰니까 double이 기본형이라고 생각함 리터럴입장에서
  double d = 123.456; // 그니까 double 에서는 8바이트니깐 상관없는데 그걸 갖다가 float에 넣어버리면 4바이트라서 오류날수도 있다고
  
  float f2 = 123.456;
  double d2 = 123.456f;
  
  int i = 3;
  float f3 = 3.f; // 3.0f
  double d3 = 3.; // 3.0
  
  float f4 = 1.234e10f;
  
  float f5 = 0x1.1p1;   //16진수에서 p는 e를 의미함 ^1 이거 지수 올라가는 거듭제곱 ㅇㅇ
  double d5 = 1.0625e0;
  
  printf("%f %F %e %E\n", f, f, f, f);
  printf("%f %F %e %E\n", d, d, d, d);
  printf("%a %A\n", f5, f5);  // %a -> 16진수로 출력하는거  
  printf("%a %A\n", d5, d5);  
  
  return 0;
}
