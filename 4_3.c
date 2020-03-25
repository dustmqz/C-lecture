// 4.3 문자열이 메모리에 저장되는 구조

// 숫자
// 숫자 하나 1
// 숫자의 배열 0 1 2 3 4 5 6 7 8 9 
// 문자하나 'a'
// 문자의 배열 'H' 'e' 'l' 'l' 'o' '\0' -> 문자열에서는 문자 마지막에 아스키코드 0에 해당하는 문자가 하나 들어감
// ㄴ 문자의 마지막을 표현하기 위함 NULL character이라고도 부름


# include <stdio.h>

int main()
{
  //숫자의 배열
  int a = 1;
  int int_arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };  
  
  printf("%i %i %i\n", int_arr[0], int_arr[1], int_arr[9]); // 순서 조심 1번쨰가 아니고 0번쨰임 파이썬에서도 했던거지 ㅇㅇ
  
  printf("%i\n", int_arr[10000]); //-> 범위 밖의 것을 출력하려고 해서 오류남
  
  // 문자의 배열
  char c = 'a';
  char str1[10] = "Hello"; // null character 때문에 hello 는 다섯글자인데도 여섯글자로 인식함 \0 숨어있는거임 마지막에
  char str2[10] = { 'H', 'i'};
  
  printf("%c\n", c);    // 한글자라서 %c로 해야됨
  printf("%s", str1);   // string 이라서 %s 로 해야됨
  printf("%s\n", str2); // 이렇게 위에서 \n 없이 출력해버리면 \0때문에 띄어쓰기 있이 가야할 것 같지만 두개가 붙어서 출력됨 
  // printf 가 \0을 만나면 출력을 중지함. 그래서 필요한거고 띄어쓰기 개념이 아니다.
  
  printf("%hhi %hhi %hhi %hhi %hhi\n",                 
    str2[0], str2[1], str2[2], str2[3], str[4]);
  // ㄴ72      ㄴ105    ㄴ0      ㄴ0      ㄴ0      범위 벗어나서 0으로 출력 그렇다고 무조건 0으로 출력되는것은 아님
  
  //char str3[10] = "Hello, World" // array size is not enough
  char str3[20] = "Hello \0World";  // -> Hello, 밖에 안나옴 \0 만나서 출력을 중단해버림 
  printf("%s\n", str3);
  
  return 0;
}
  
