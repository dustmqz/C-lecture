// 6.5 사실과 거짓

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
  int tv, fv;
  tv = (1 < 2);
  fv = (1 > 2);
  
  printf("True is %d\n", tv); // 1
  pritnf("False is %d\n", fv); // 0
  
  int i = -5;
  while (i)
    printf("%d is true\n", i++);
  pritnf("%d is false\n", i); // 0은 false 그외에는 true 뭔지 알지?
  
  while(1)
  {
    //infinite loop
    //조건식 만족시키면 빼고 나오는 거를 써서 나오면 됌
  }
  
  return 0;
}
  
// 6.6 _Bool 자료형

int main()
{
  _Bool boolean_true = (2 > 1);   // 1
  _Bool boolean_false = (1 > 2);  // 0
  
  printf("True is %d\n", boolean_true);
  printf("false is %d\n", boolean_false);
}
// <stdbool.h> 헤더 이거 쓰면 _Bool 이 아니라 bool로 쓸 수 있게 됨.
// 이거 헤더 역할이 #define bool _Bool
//                 #define True 1
//                 #define False 0 이거임 ㅇㅇ
  
  
// 6.7 관계 연산자의 우선순위
// 쉬워 그냥 우선순위 모르겠으면 괄호로 

  
  
  
