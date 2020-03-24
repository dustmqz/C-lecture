# 4.2 sizeof 연산자

# define _CRT_SECURE_NO_WARNINGS

# include <stdio.h>
# include <stdlib.h> // malloc()

/* 4. sizeof structure
struct MyStruct
{
  int i;
  float f;
};
*/

int main()
{
  /* 1. sizeof basic types */
 
  int a = 0;
  unsigned int int_size1 = sizeof a;
  unsigned int int_size2 = sizeof(int);
  unsigned int int_size3 = sizeof(a);
  
  size_t int_size4 = sizeof(a);       // size_t 쓰는 이유는 호환성을 높이기 위해 사용함 
  size_t float_size - sizeof(float);  // 다른 특별한 하드웨어에서는 sizeof가 unsigned int 가 아닐수도 있대나 뭐래나
  
  printf("Size of int type is %u bytes.\n", int_size1);
  printf("Size of int type is %zu bytes.\n", int_size4);
  printf("Size of float type is %zu bytes.\n", float_size);
  
  /* 2. sizeof arrays */
  
  int int_arr[30]; // int_arr[0] = 1024; ...
  int *int_ptr = NULL;
  int_ptr = (int*)malloc(sizeof(int) * 30); // int_ptr[0] = 1024; ...
  
  printf("Size of array = %zu bytes\n", sizeof(int_arr));   //120 byte
  printf("size of pointer = %zu bytes\n", sizeof(int_ptr)); //4 byte   포인터와 malloc 동적할당 부분이라 이해 못했음.
  
  /* 3. sizeof character array */\
    
  char c = 'a';
  char string[10]; // maximally 9 character + '\0' (null character) 문자열에서는 마침표 역할 같은 문자가 하나 필요해서 9개밖에 저장 안된대
  
  size_t char_size = sizeof(char);   // 1
  size_t str_size = sizeof(string);  // 10
  
  printf("Size of char type is %zu bytes.\n", char_size);
  printf("Size of string type is %zu bytes.\n", str_size);
  
  /* 4. sizeof structure */
  // 구조체
  printf("%zu\n", sizeof(struct MyStruct)); // 8 -> int 4 float 4 합해서 8 구조체라서 나중에 배운대 이해 못함 
  
  return 0;
}
