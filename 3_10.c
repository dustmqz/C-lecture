/* 
  자료형 
  ASCII Chart
  http://www.asciitable.com/ 
  위 사이트에 있엉
  각 문자에 대해 대응되는 숫자 존재
  dec = 10진수 oct = 8진수 hex = 16진수
  
*/


# define _CRT_SECURE_NO_WARNINGS

# include <stdio.h>

int main()
{
  char c = 'A'
  char d = 65; // d = 'A'
  
  printf("%c %hhd\n", c, c);    // hhd = 숫자 c = 문자
  printf("%c %hhd\n", d, d);    // %c = 문자로 출력을 해줌
  
  // printf("%c \n", c + 1);  -> 결과값 B
  
  char a = '\a';
  printf("%c \n", a);
  
  float salary;
  
    printf("$______\b\b\b\b\b\b\n");
    scanf("%f", &salary);
  
}  
  














