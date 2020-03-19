// 3.12 부동소수점형의 한계

#include <stdio.h>
#include <float.h>
#include <math.h>

int  main()
{
  // round-off errors (ex1)
  float a, b;
  a = 1.0E20f + 1.0f;  //실수e+지수: 실수 * 10의 거듭제곱. 2.1e+3이라면 2.1 * 10^3 = 2100.
  b = a - 1.0E20f;
  printf("%f\n", b);   //너무 큰 숫자와 작은 숫자를 합하면 작은 숫자가 무시됨... 
  
  // round-off errors (ex2)
  float a = 0.0f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f;
  a = a + 0.01f; // 총 100번
  
  printf("%f\n", a); // 이렇게 해도 1이 안나옴. 0.01을 백번 더해도 1이 안나옴...
  //이유: 0.01를 2진수로 표현을 못해.. 
  
  // overflow
  float max = 3.402823466e+38F; // float 맥시멈값
  printf("%f\n", max);
  max = max * 100.0f;
  printf("%f\n", max); // -> 숫자가 너무 커서 뭔소린지 모르겠다.. 라고 출력된다고 보면 편함 double 쓰면 해결
 
  // underflow
  float f = 1.401298464e-45F; // float 미니멈값
  printf("%e\n", f);
  f = f / 100.0f; // subnarmal 부동소수점형으로는 더이상 표현할 수 없는 작은 숫자 정밀도를 잃어버린 숫자
  printf("%e\n", f);
  
  float ff = asinf(1.0f);
  printf("%f\n", ff);
  
  ff = asinf(2.0f);
  printf("%f\n", ff);
  
  
  return 0;
  
}
  
