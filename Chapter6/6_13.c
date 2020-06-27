// 6.13 탈출조건 루프 do while 
// 예제 풀기

#include <stdio.h>

int main()
{
  const int i = 337;
  int a = 0;
  
  while (i != a){
    printf("Enter secret code : \n");
    scanf("%d", &a);
  }
  
  printf("Good!\n");


  // 품

  do  // 일단해라!
  {
    printf("Enter secret code : \n");
    scanf("%d", &a);
  }
  while(i != a); // 이럴때 까지!

  printf("Good!");

  return 0;
}


// while 문 보다는 for문을 많이쓰고 do while문 보다는 while 문을 더 많이쓴다. 


