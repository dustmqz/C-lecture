// 6.14 어떤 루프를 사용할까?

// 진입조건    VS   탈출조건
// while, for vs  do while

// 덜 쓰인다고 하더라도 알고는 있어야 됌
// 별 내용이 없네

//6.15 중첩된 루프들
//예제

// 원하는 글자부터 원하는 글자까지 원하는 횟수만큼 반복해서 출력

#include <stdio.h>

int main()
{
  char x = 'A';
  char y = 'K';
  int repeat = 5;
  
  for (int i = 0; i < repeat; ++i){
    while(x <= y){
      printf("%c ", x);
      x++;
    }
    x = 'A';
    printf("\n");
    
  }
}

//함

// 또 예제

int main()
{
  char x = 'A';
  char y = 'K';  
    
  for(int b = 1; x < y; ++x, ++b){
    for(int a = 0, char x1 = 'A';; a < b; ++a){
      printf("%c ", x1);
    }
    printf("\n");
  }
  return 0;
}
  
// 아직 덜함 다음시간에................

