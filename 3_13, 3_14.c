// 3.13 불리언형

#include <stdio.h>
#include <stdbool.h>

int main()
{
  printf("%u\n", sizeof(_Bool)); // 1 byte
  
  _Bool b1;
  b1 = 0; // false
  b1 = 1; // true
  
  printf("%d\n", b1);
  
  bool b2, b3;
  b2 = true;
  b3 = false;
  
  printf("%d %d\n", b2, b3);
  
  return 0;
}

// 3.14 복소수형

#include <stdio.h>
#include <complex.h>

//gcc 컴파일러가 더 지원 잘해줘서 이 아래부터는 비쥬얼 스튜디오 코드에서 작성한 내용임
int main ()
{
   double _Complex z = 1 + 2*I; // i 는 너가 알고 있는 그 허수부분
   
   z = 1 / z;
   
   printf("1 / (1.0 + 2.0i) = %.1f%+.1fi\n", creal(z), cimag(z)); // creal 이 실수부분 cimag 가 허수부분
   
   return 0;
 }
