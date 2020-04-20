// 5.6 연산자 우선순위와 표현식 트리

// |  연산자  |    결합법칙   |
// |    ()   | 왼쪽에서 오른쪽|
// | +-(단항) | 오른쪽에서 왼쪽|
// |    */   | 왼쪽에서 오른쪽|
// | +-(이항) | 왼쪽에서 오른쪽|
// |     =   | 오른쪽에서 왼쪽|

// +- 단항 연산자는 부호를 표시하는 연산자 즉 -3 같은건데 3이 먼저 들어가고 - 기호가 들어가서 오른쪽에서 왼쪽임
// = 대입연산자 는 a = 60 이다 이러면 60이 a 에 들어가는 방식임 ㅇㅇ


// 5.7 나머지 연산자
// int a = 13 % 5 -> 나머지 3이니까 a = 3
// int b = 90 % 60 -> 나머지 30 이니까 b = 30
// 구현문제나옴
// second 입력받고 몇시간 몇분 몇초인지 출력하는 프로그램

// 초안 ↓
#include <stdio.h>

int main(void) 
{
	int hours, minutes, seconds = 0;
	int times = 0;
	printf("Input seconds : ");
	scanf(%d, &times);
	hours = times/3600;
	minutes = times%3600 / 60;
	seconds = times % 3600 % 60;
	printf("%d hours, %d minutes, %d seconds", hours minutes seconds);
	return 0;
}
// 엌 scanf에 "" 빼먹음
#include <stdio.h>

int main(void) 
{
	int hours, minutes, seconds = 0;
	int times = 0;
	printf("Input seconds : ");
	scanf("%d", &times);
	hours = times/3600;
	minutes = times%3600 / 60;
	seconds = times % 3600 % 60;
	printf("%d hours, %d minutes, %d seconds", hours minutes seconds);
	return 0;
}
// 풀어따 는 틀렸다
// 입력받은게 음수일때도 생각해야지
#include <stdio.h>

int main(void) 
{
	int hours, minutes, seconds = 0;
	int times = 0;
	printf("Input seconds : ");
	scanf("%d", &times);
	if (times >= 0)
	{
		hours = times/3600;
		minutes = times%3600 / 60;
		seconds = times % 3600 % 60;
		printf("%d hours, %d minutes, %d seconds", hours, minutes, seconds);
	};
	if (times < 0)
		{
			printf("음수다이눔아");
		};
	return 0;
}
// 다시했음
// while 문으로 해야하는딩 ㅋㅋ 
// while 문 쓰는거 영상에 있어 ㅇㅇ
int main()
{
  int seconds = 0, minutes = 0, hours = 0;
  
  printf("Input seconds : ");
  scanf("%d", &seconds);
  
  while (seconds >= 0)
  {
    minutes = seconds / 60;
    seconds %= 60;
    
    hours = minutes / 60;
    minutes %= 60;
    
    printf("%d hours, %d minutes, %d seconds\n", hours, minutes, seconds);
    
    printf("Input seconds : ");
    scanf("%d", &seconds);
  }
  return 0;
}
// 이거 오류남 while 문이라 계속 입력해줘야함 그러다가 - 입력해야 끝나는 프로그램이 됬음 ㅇㅇ
// 그냥 if 문 쓰자..

// 그리고 음수에서 나머지 연산자 사용하는거 있음
//쉽게 말할게 
// 11 / 5 몫 = 2 나머지 1
// 11 / -5  몫 = -2 나머지 1
// -11 / -5 몫 = 2 나머지 -1
// -11 / 5 몫 = -2 나머지 -1


