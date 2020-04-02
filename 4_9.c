// 4.9 printf() 함수가 인자들을 해석하는 과정

/*
float n1 = 3.14; // 4bytes
double n2 = 1.234; // 8bytes
int n3 = 1024; // 4bytes

printf("%d %d %d\n", n1, n2, n3);
                      ㄴ뒤에 이렇게 오는거를 인자라고 부름
printf 에선 부동소수점이 인자로 들어오면 float 든 double 이든 double로 변환함 (=8bytes) 
int 는 그대로 4bytes
그런데 %d = int 제어잖아.. 그러니까 4바이트인거임 인자는 8바이트인데.. 
printf 안에서 딱 4바이트만 읽어서 변환해버림 그래서 문제생김
그니까 데이터 넣어줄땐 8바이트 넣었는데 4바이트만 읽고 출력하려고 하니까 문제생김
*/

#include <stdio.h>

int main()
{
  float n1 = 3.14; // 4bytes
  double n2 = 1.234; // 8bytes
  int n3 = 1024; // 4bytes
  
  printf("%f %f %d\n\n", n1, n2, n3);
  
  //Note the warnings in output window
  printf("%d %d %d\n\n", n1, n2, n3); // 4, 4, 4 -> 앞에서 크기가 틀려버리면 뒤에 것도 크기 밀려서 다 출력 이상하게됨
  printf("%lld %lld %d\n\n", n1, n2, n3); // 8, 8, 4 -> 앞에 두개는 출력 이상함 float 를 int 로 받으니까 그래도 byte크기는 맞아서 세번째꺼는 출력 제대로 됨
  printf("%f %d %d\n\n", n1, n2, n3); // 8, 4, 4  -> 두번째부터 틀려서 두,세번째 출력 오류
  printf("%f %lld %d\n\n", n1, n2, n3); // 8, 8, 4 -> 크기는 맞으니까 1,3번째는 정상출력 두번째만 int로 받으려고해서 
  
  return 0;
}
