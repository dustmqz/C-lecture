// 6.18 루프 안에서 함수의 반환값 사용하기

#include <stdio.h>

int compute_pow(int base, int exp); // prototype

int main()
{
  // 숫자 거듭제곱 출력하는 함수
  int base, exp, i, result;
  
  while (scanf("%d %d", &base, &exp) == 2)
  {
    int j;
 
    result = compute_pow(base, exp);
    printf("Result = %d\n", result);
  }
  
  return 0;
}
// scope 
// {} 안에서 선언된 변수는 그 영역 안에서만 사용 가능하다!

int compute_pow(int base, int exp)
{ 
  int i, result;
  
  result 1;
  for(i = 0; i < exp; ++i)
    result *= base;
    
  return result;
}

//main함수가 젤 중요하니까 일단 위로 올려두고,
//나머지 함수는 나중에 필요할때 보게 아래로 깔고,
//위에 나머지 함수 사용할 수 있게 써주기
//함수 프로토타입 선언은 "함수정의가 뒤에 나올 거니까 에러 없이 넘어가줘"라고 우리에게 말해주는 것입니다.


