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

 

