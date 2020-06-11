// 5.1 반복 루프와의 첫 만남

#include <stdio.h>

int main()
{
  // 루프시키는 고전 방법 -> 레이블 만들기 goto 문 사용 우리는 평생 안쓸거래
/*
  int n = 1;
label:
  printf("%d\n", n);
  n = n + 1
  
  if (n == 10) goto out;
  
  goto label;
  
out:
*/

  int n = 1;
  
  while (n < 3)
  {
    printf("%d\n", n);
    n = n + 1;
  }
  
  return 0;
}

// python 에서 했던거

// 5.2 대입 연산자와 몇 가지 용어들

  //뭐...L-value 랑 R-value 설명하는건데 크게 안중요한 것 같음 궁금하면 나중에 검색해서 공부해~
  // 그냥   a = 42;
  // 이렇게 있으면 a= lvalue 42가 rvalue
  // 메모리를 할당받으면 lvalue 인가봄..? 몰라도 될거같아~
  
// 5.3 더하기, 빼기, 부호 연산자들
// 쉽다
int main()
{
  printf("%d\n", 1 + 2);
  
  int income, salary, bonus;
  
  income = salary = bonus = 100; // triple assignment
  
  salary = 100;
  bonus = 30;
  
  income = salary + bonus; // l-value 

  int a, b;
  a = -7;
  b = -a;
  b = +a; // +does nothing

  1.0f + 2; //?
  // float + int = float ㅋㅋ
  
  return 0;
}
}


