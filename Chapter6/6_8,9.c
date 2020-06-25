// 6.8 for 루프 소개

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
  // Indefinite loop vs. Counting loop 
  int i;
  
  for(i = 1; i <= 10; i++)
    printf("%d ", i);
    
  return 0;
}
// 알자나 for 문 1   2,5      4,7
//                       3,6        알지?

// 6.9 for는 유연해요

int main()
{
  /*
    for (initialize; test; update)
         statement
  */
  
  for (int i = 10; i > 0; i--)
      printf("%d "< i);
  int i = 0;
  for(printf("Let's go!\n"); i != 7; scanf("%d", &i))
      ;
      // 이렇게 코딩 하지마... 실무에서는 코드 복잡하게 짜지마라 알고리즘으로 해야뎀
}
