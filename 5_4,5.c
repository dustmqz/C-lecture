// 5과 너무 쉽다...... 대충씀
// 오 예제임
// 5.4 곱하기 연산자

#include <stdio.h>

int main()
{
  double seed_money, target_money, annual_interest;
  
  printf("Input seed money : ");
  scanf("%lf", &seed_money);
  
  printf("Input target money ");
  scanf("%lf", &target_money);
  
  printf("Input annual interest (%%) : ");
  scnaf("%lf", &annual_interest);
  
  double fund = seed_money;
  int year_count = 0;
  
  while (fund < target_money)
  {
  year_count += 1
  fund = fund * (1 + annual_interest / 100);
  
  }
  
  printf("It takes %d years\n", year_count);
  
  return 0;
}

// 맞춤

// 5.5 나누기 연산자
// 별거없고 그냥 나누기 했을 때 (정수끼리) 소수점 나오면 소수점은 무조건 버림 반올림 올림 그딴거 안함
// -도 똑같이 그냥 버림
// 9.0 / 4 -> 실수 나누기 정수 해버리면 컴파일러 내부에서 정수를 실수처리 해서 계산함 가능한게 아닌데 컴파일러가 해주는거임
// 딱히 별난거 없다

