// 6.1 while 반복 루프에서 scanf() 의 반환값 사용하기

//먼저 예제 하나 숫자 계속 입력받고 q입력받으면 지금까지 입력한 숫자들 더한 값 출력하는 프로그램

/*
Enter an integer (q to quit) : 1
Enter next integer (q to quit) : 2
Enter next integer (q to quit) : 5
Enter next integer (q to quit) : 10
Enter next integer (q to quit) : 3
Enter next integer (q to quit) : q
Sum = 21
*/


#include <stdio.h>

int main()
{
  int num, sum = 0;
  scanf(%d, &num);
  while num != 'q';
    printf("Enter an integer (q to quit) : ", num);
    sum += num;
  printf("Sum = ", sum);
}
  
  
#include <stdio.h>

int main()
{
  int num, sum = 0;
  scanf("%d", &num);
  while (num != 100);
  {
    printf("Enter an integer (q to quit) : %d", num);
    sum += num;
  }
  printf("Sum = %d", sum);
}
  
  여까지 했다.. ㅅ비랑ㅁㅇㄹ머링넘라ㅣㅏ러 
  
