// 6.2 의사 코드 Pseudo Code

// 그냥 코드를 사람 말로 풀어서 해석한거라고 생각하면됨..

// 6.3 진입조건 루프 while
// 그냥 while(); 이렇게 ; 붙이지마라 {} 까먹지마라..
// 옛날에는 어떻게든 잔머리를 굴려서 코드의 효율성을 높였지만 요즘은 시대가좋아서 읽기좋고 의도를 명확하게 파악할 수 있는 코드가 더 중요하다.

// 6.4 관계연산자
// < > <= >= == != 이런것들

#include <stdio.h>
#include <math.h> // fabs() -> 괄호안의 값의 절댓값을 반환해줌

int main()
{
  const double PI = 3.1415926535897932384626433832795;
  double guess = 0.0;
  
  printf("Input PI : ");
  scanf("%lf", &guess);
  //while (guess != PI) -> 이렇게하면 위의 PI 긴거값이랑 완전 정확해야하니까
  while (fabs(guess - PI) > 0.01) // 이렇게 어느정도 맞으면 인정해주는 걸로..
  {
    printf("Fool! Try again. \n");
    scanf("%lf", &guess);
  }
  
  printf("Good!");
  
  return 0;
}

