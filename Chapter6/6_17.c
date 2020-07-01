// 6.17 for 루프를 배열과 함께 사용하기

// 그냥 하면 됌


#include <stdio.h>

int main()
{ 
  int my_arr[SIZE];

  for (int i = 0; i < SIZE; ++i)
    my_arr[i] = i*i;

  return 0;
}

// 12:03 예제
// 배열 + for 문 이용해서 만들기
#include <stdio.h>
#define COUNT 5

int main()
{
  int num[COUNT];
  int Sum = 0;
  
  printf("Enter %d numbers : ", COUNT);
  
  for(int i = 0; i < COUNT; ++i){
    scanf("%d", &num[i]);
    Sum += num[i];
  }
  printf("Sum = %d", Sum);
}

// 품 ㅋ


/*
#define SIZE 5 
int main()
{
  int numbers[SIZE];
  int sum = 0;
  int i;
  
  printf("Enter %d numbers : ", SIZE);
  
  for (i = 0; i < SIZE; ++i)
    scanf("%d", &numbers[i];
    
  for (i = 0; i < SIZE; ++i)
    sum += number[i];
    
  printf("Sum = %d\n", sum);
  
  return 0;
}
// 강의에 나온 답

*/


  
  
  
