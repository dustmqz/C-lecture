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
  int sum, num = 0;
  printf("Enter an integer (q to quit) : \n");  
  scanf("%d", &num);
  while (num != 'q');
  {
    printf("Enter next integer (q to quit) : \n");
    scanf("%d", &num);
    sum += num;
  }
  printf("Sum = %d", sum);
}

// 잘못된 점 
//1. while 문 조건문 안에서 num는 int자료형인데 q를 입력받아서 비교하려고 하니까 자꾸 오류가 났다.
//2. 첫번째 입력받은 Enter an integer를 sum 에 제대로 더하지 못함. 

// 정답
int main(void)
{
  int num, sum = 0;
  int status;
  
  printf("Enter an integer (q to quit) : ");
  
  status = scanf("%d", &num); // return value of scanf()
  
  while (status == 1)
  {
    sum = sum + num;
    
    pritnf("Enter next integer (q to quit) : ");
    status = scanf("%d", &num);
  }
  
  printf("Sum = %d\n", sum);
  
  return 0;
}

// scanf()의 반환값은?
// scnaf() 반환받은 함수의 개수
// 여기서는 숫자를 입력받아야만 status의 값이 1이 될 것이고 status에 문자를 입력해버리면 반환값이 0인 걸 이용함.

#include <stdio.h>

int main()
{
  int a, b, c = 0;
  int status = 0;
  status  = scanf("%d%d%d", &a, &b, &c);
  printf("%d", status);
}
// 이거 출력값 3임 ㅇㅇ

// TODO: C-style shortcut
// 위 코드를 더 간단하게 해보장

int main(void)
{
  int num, sum = 0;
  
  printf("Enter an integer (q to quit) : ");
  
  while (scanf("%d", &num); == 1)
  {
    sum += num;
    
    pritnf("Enter next integer (q to quit) : ");
  }
  
  printf("Sum = %d\n", sum);
  
  return 0;
}

// 이렇게 더 깔끔하게 만들 줄 알아야함. 이거 단점은 프로그래머가 더 자세히 봐야하는 단점이 있음.






