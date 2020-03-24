# 4.2 sizeof 연산자

# define _CRT_SECURE_NO_WARNINGS

# include <stdio.h>
# include <stdlib.h> // malloc()


int main()
{
  /* 1. sizeof basic types */
 
  int a = 0;
  unsigned int int_size1 = sizeof a;
  unsigned int int_size2 = sizeof(int);
  unsigned int int_size3 = sizeof(a);
  
  size_t int_size4 = sizeof(a);
  size_t float_size - sizeof(float);
  
  printf("Size of int type is %u bytes.\n", int_size1);
  printf("Size of int type is %zu bytes.\n", int_size4);
  printf("Size of float type is %zu bytes.\n", float_size);
  
  /* 2. sizeof arrays */
  
  # 6:18 부터 다시보자 너무 
