# 4.1 문자열 입출력하기


# define _CRT_SECURE_NO_WARNINGS

# include <stdio.h>

int main()
{
  char fruit_name[40]; // stores only one character.
  
  printf("what is your favorite fruit?\n");
  
  scanf("%c", &fruit_name); // %c = 문자열 입력받음 , scanf 가 문자열 입력받으면 그걸 &에 저장. &가 fruit_name 의 주소를 가져오는거임
  
  printf("You like %c!\n", fruit_name);
  
  return 0;
}

# -> 입력을 받아도 문자열이 char 이기 때문에 저장할 공간이 부족해서 첫글자 밖에 저장이 안됨 char 이 1byte 라서.. 그래서 []를 붙임 배열. char 타입이 40개가 촤라라라락 있다고 
# 그래도 안됨 ㅋㅋㅋㅋㅋㅋ

int main()
{
  char fruit_name[40];
  printf("what is your favorite fruit?\n");
  scanf("%s", fruit_name); // string, %s 로 쓰고 뒤의 & 가 사라진다!!!!!!!!! fruit_name 이 문자였는데 '문자열'로 바뀐거임
  printf("You like %s!\n", fruit_name);
  
  return 0;
}

