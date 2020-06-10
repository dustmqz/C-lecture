// 5.9 표현식과 문장
// 표현식              값          표현식의 주요 기능은 값을 계산하는 것 부수적인 기능이 변수에다가 대입을 하는 것임 ㅇㅇ
// q = 5 * 2          10  
// 2 > 1               1(true)
// 2 < 1               0(false)
// a                   a의 값

// c언어 코딩할 때 ; 으로 끝나는 문장들 하나하나 이름이 있다 이정도로 생각 하면 될 것 같아

/*
  int x, y , apples; // declaration statement
  apples = 3; // assignment statement
  ; // null statement
  7;
  1 + 2;
  x = 4;
  ++x;
  x = 1 + (y = 5); // y = 5 is subexpression
  while (x++ < 10) // while statement (structured statements)
      y = x + y;
      
  printf("%d\n", y); // function statement
  return 0; // return statement

  ** Side Effects and Sequence Points **
  x = 4; 
  y = 1 + x++;
  ; 이 있어야 컴파일러에서 아 이제 ; 앞에 있는 표현식의 값을 계산 할 수 있겠구나 하고 생각을 함 ; = sequence points
  
  while (x++ < 10) 아니 여기는 ;없는데 왜 아래 printf함수의 x는 +1 된 값이 나오냐면 (x++ < 10) 
      printf("%d\n", x);  이 문장 자체가 full expression 이라서 그럼 그니까 괄호 뒤에 ; 있다고 가정하고 컴파일러에서 계산하는 거임
      헷갈리제? https://dojang.io/mod/page/view.php?id=757 들가면 시퀀스 포인트가 ; 뿐만 아니라 여러개가 다양하게 있음
      이번 경우는 while, do 의 조건식 -> 반복될 코드가 실행되기 직전에 모든 식의 계산이 완료됩니다. 여기에 시퀀스포인트가 있어서 실행이 되는 
      것 같다 


      
  y = (4 + x++) + (6 + x++);  // Not (4 + x++) nor (6 + x++) is a full expression. 이렇게 쓰지마라 두번쓰지마 ++ ㅇㅇ
