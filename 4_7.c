//4.7 printf() 함수의 변환 지정자들

// printf(제어-문자열, 아이템1, 아이템2, ...)
// int a = 2; printf("%d + %d = %d", 1, a, 1+a);
// %specifier 

// %a : 부동 소수점 수, 16진수, p-표기법
// %a : 부동 소수점 수, 16진수, p-표기법 (출력 대문자)
// %c : 한 글자
// %d(또는 %i) 부호가 있는 10진(decimal) 정수(integer)
// %e : 부동소수점 수 , e-표기법
// %E : 부동소수점 수 , e-표기법 (출력 대문자)
// %f : 부동소수점 수 , 10진수 표기
// %g : 값에 따라서 %e나 %f 사용. 지수가 -4보다 작거나 정밀도보다 크거나 같을 경우에는 %e 사용
// %g : 값에 따라서 %e나 %f 사용. 지수가 -4보다 작거나 정밀도보다 크거나 같을 경우에는 %e 사용 (출력 대문자)
// %o : 부호가 없는 8진 정수
// %p : 포인터
// %s : 문자열
// %u : 부호가 없는 10진 정수
// %x : 부호가 없는 16진 정수, 소문자 알파벳 사용
// %X : 부호가 없는 16진 정수, 소문자 알파벳 사용 (출력 대문자)
// %% : 퍼센트 기호 출력

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
  double d = 3.1415926535897932384626433832795028841971693993751058209749445
    
  printf("%c\n", 'A'); // 한글자 표현할때는 "" 가 아니라 '' 로 둘러싸야 한다.
  printf("%s", "I love you\n");
  printf("Even if there's a small chance, \
we owe this to everyone who's not in this room to try \n"); // 텍스트 에디터 텍스트가 너무 길면 두줄로 쓰고 위에 \ 붙이면 됨 
  
  printf("\n");
  printf("%d %i %i %i\n", 1004, 1234, INT_MAX, UINT_MAX); // Note overflow
  printf("%u %u %u\n", 1024, -1, UINT_MAX);
  
  printf("\n");
  printf("%f %f %lf\n", 3.141592f, d, d); // l in %lf is ignored, l 붙이는건 다음강의에서 설명
  printf("%a %A\n", d, d);
  printf("%e %E\n", d, d);
  
  printf("\n");
  printf("%g %g\n", 123456.789, 1234567.89);
  printf("%G %G\n", 123456.789, 1234567.89);
  printf("%g %g\n", 0.00012345, 0.000012345);
  printf("%G %G\n", 0.00012345, 0.000012345);
  
  printf("\n");
  printf("%o\n", 9);
  printf("%p\n", &d); // pointer-of operator
  
  printf("\n");
  printf("%x %X\n", 11, 11);
  printf("%%\n", d); // Note the warning. d is ignored. -> %출력하는거라 d 가 의미가 없음
  
  printf("\n");
  printf("%9d\n", 12345); // %9d 는 출력할때 9자리 쓰라는 말임 12345는 다섯글자니까 앞에 4칸 공백으로 띄고 출력됨
  printf("%09d\n", 12345);// %09d는 빈칸을 0으로 채움 앞에 남는거..
  printf("%.2f\n", 3.141592); // %.2 는 소숫점 뒤에 
  printf("%.20f %.201f\n", d, d);
  
  printf("\n");
  int n_printed = printf("Counting!");
  printf("%u\n", n_printed);
  
  return 0;
}
    




// 무조건 복습 꼼꼼히 듣자....
