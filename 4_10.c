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
  // 여러개를 입력 할때는 space를 써서 여러개 입력을 한다!
  //ex) 123 3.14 hello
  // 지금 3개를 입력받는데 4개를 입력하면??
  // ㄴ 마지막에 입력받는건 버퍼라는 곳에 있다가 마지막에 사라짐.. 나중에 다시 설명

  /* character */
  char c;
  scanf("%c", &c); // try blank
  printf("%i\n", c); // blank is 32
  // 정수를 입력받고 나서 숫자로 출력하니까 ascii code가 나옴
  // 빈칸입력해도 문자로 입력 됨 빈칸의 아스키코드가 32 임 출력값 = 32
  // 그래서 문자 입력받을때 빈칸도 입력을 받음 조심하셈 아래에 예제
  
  /* Unsigned as signed */
  unsigned i;
  scanf("%i", &i); // try negative number
  printf("%i\n", i);
  // unsigned>0 인건 알테구 거기에 -값 넣어버리니까 오버플로우 날텐데 입력해도 안나지?
  // 이렇게 하면 안됨 아래처럼 해야함
  
  /* Unsigned as unsigned */
  unsigned i2;
  scanf("%u", &i2); // try negative number
  printf("%u\n", i2);
  // 이렇게 오버플로우 나는게 정상임 ㅇㅇ % 조심하자
  
  /* floating point numbers */
  // l for double for %f, %e, %E, %g
  double d = 0.0;
  scanf("%lf", &d); // lf, try E notation double 이니까 %lf 로 받아야함
  printf("%f\n", d); // f
  // double 인데 scanf 에서 %f 로 받으면 입력해도 0.0으로 출력됨 사이즈가 안맞아서...
  // double 이여도 printf는 %f인거 알지?
  // scientific notation 도 사용 가능 123.4e-2 -> 출력값 1.234000
  // ㄴ 123.4*10^-2
  // ㄴ e는 과학적 표기법으로 e가 들어가면 123.4 * 10^-2 이런 느낌이야
  
  /* Width */ 
  char str[30];
  scanf("%5s", str); // width 몇글자 까지 입력을 받을건지. printf 할떄 %[flags][width][.precision] 이거 서식지정자 그거 width
  printf("%s\n", str); // 5글자 까지만 입력 받으니까 10글자 쳐도 앞에 5글자만 출력됨
  
  /* h modifier */
  char i;
  scanf("%hhd", &i); // try large numbers 255보다 큰거 입력하면 오류남 char = 0~255
  printf("%i\n", i);
  
  /* integer with characters */
  int i;
  scanf("%i", &i); // try '123ab' -> 123만 출력, ' 123a456' -> 123만 출력 문자 만나면 더이상 숫자 없을거라고 생각함
  printf("%i\n", i);
  
  /* j modifier */
  intmax_t i ;
  scanf("%ji", &i);
  printf("%ji", i);
  
  /* Regular characters */ // -> 정규식..이라는건데 나중에 배울듯 범위 벗어남
  int a, b;
  scanf("%d,%d", &a, &b); // 빈칸말고 % 사이에 , 넣어버리면 입력할때도 , 넣어야 두번째 입력받는구나~ 하고 인식함 ex) 123,456 띄어쓰기 금지
  //근데 123, 456 하니까 정상작동하네 띠용
//  scanf("%d, %d", &a, &b);// 위의 scanf에서 %사이에 빈칸이 없는데 지금 여기서는 빈칸이 있으니까 123 ,456 이렇게 입력 안하면 오류남
//  scanf("%d, %d", &a, &b);// ㄴ %사이에 빈칸 있으면 입력받을때 빈칸 있으면 그냥 무시함 그니까 123   ,  456 이렇게 입력 해도 됨
//  scanf("%d-%d", &a, &b);
//  scanf("%dA%d", &a, &b); 
  printf("%d %d\n", a, b);
  
  /* char receives blank */
  int a, b;
  char c;
  scanf("%d%c%d", &a, &c, &b); // try 123 456(blank) -> 빈칸을 문자로 인식해서 입력받음
  printf("%d|%c|%d", a, c, b); // | is separator
  
  // sentences?, getchar(), fgets(), etc.
  
  /* return value of scanf() */
  int a, b;
  int i = scanf("%d%d", &a, &b);
  printf("%d", i); // -> 2
  //scanf 의 return 값은 아이템을 몇개나 입력을 받았는가...
  
  /* *modifier for printf() */
  int i = 123;
  int width = 5; // from script file, scanf, etc.
  printf("Input width : ");
  scanf("%d%", &width);
  printf("%*d\n", width, i);
  
  /* *modifier for scanf() */
  //용법이 완전히 다름
  int i;
  scanf("%*d%*d%d", &i); // 앞에 %*d 이런거 무시해버림 입력을 받기는 3개를 다 받는데 첫번째 두번째꺼는 입력 받아도 무시함
  printf("Your third input = %d", i); */ // scanf 가 구분을 하는 기호로써 빈칸 혹은 줄바꿈을 찾음 위의 %사이에 , 넣는거 아닌 이상
  
  return 0;
}
    
    
  
  
  
  
  
  
  
  
  
  
  
  
  
