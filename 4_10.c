// 4.10 scanf() 함수의 사용법

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <inttypes.h> // intmax_t

int main()
{
  /* multiple inputs with blank separators */
  int i; 
  float f;
  char str[30];
  scanf("%d %f %s", &i, &f, str); // Note % is absent in front of str
  // 주의 printf에서는 float 든 double 이든 %f 로 받아도 가능한데 scanf 에서는 float 는 %f double 은 %lf 이렇게 받아야함
  printf("%d %f %s\n", i, f, str);
  // 너무피곤하당 담에하자........
