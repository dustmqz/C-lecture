// 3.5 정수와 실수 
// 어려워서 그냥 나중에 비트 공부할 때 다시 보는걸로

// 3.6 정수의 오버플로우

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main():
{
    unsigned int i 0; 
    //singed int 는 우리가 흔히 사용하는 int라고 생각하면 편해 부등호가 존재하는 실수 범위라고 생각하면 편하고
    //unsigned int 는 우리가 사용하는 int에서 부호비트를 뺀거야. -를 +에 몰빵해서 크기가 singed 에 비해서 양수쪽은 두배.
    //부호비트 =-부호를 뺀 +부호만 존재하는 거. 
    //실수는 이런게 없고 정수만 이런게 있어
    
    printf("%d\n", sizeof(unsigned int)); // sizeof 는 ()안의 값의 크기, 즉 몇바이트인지 나타내줘. 여기서는 4바이트. 즉 32비트 크기는 2^32.
    printf("%d\n", sizeof(i));
  
    //오버플로우란?
    //4바이트 = 32비트 = 2^32 인데 
    
    unsigned int u_max = UINT_MAX + 1;
    
    //여기서 u_max 를 보면 UINT_MAX (= 4바이트의 최대값)에 +1 을 하면 쉽게말해서 넘친다는 거임. 그래서 0이 되버림. 
    //1111에다가 1 들어갈 자리가 없어서 0000이 된다는거야 비트 기준으로 ㅇㅇ
    //똑같이 unsigned int u_max = 0 -1; 해버리면 0에서 1을 뺄 수가 없어서 가장 큰 값이 나옴.  
  
    //i to binary represention
    char buffer[33];
    _itoa(u_max, buffer, 2);
    
    //print decimal and binary
    printf("decimal: %u\n", u_max); //%u 는 바이너리 표현하는거라 %d나 %i 쓰면 안됨 ㅇㅇ
    printf("binary: %s\n", buffer);
  
    printf("%u\n", u_max);
  
    
}


  
