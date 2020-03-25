// 4.5 기호적 상수와 전처리기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.141592f // -> 기호적 상수
//주의 #define PI = 3.141592f 가 아니다. define 뒤에 오는거 그대로 복사함 = 붙이지 마라
#define AI_NAME "Jarvis" // 여기서만 바꿔주면 아래에서 ai 이름을 바꿀 필요가 없다
// #define 뒤에는 대문자만 쓰자 관습임
// 엥 #define 안쓰고 아래에서 float pi = 3.141592f 해도 되는거 아니냐??
// 맞는데 그러면 더 아래에서 pi = 1.0f 해버릴때 클나니까 const float pi = 3.141592f 이렇게 const 붙이셈 붙이면 변수 더 못바꿈
// 그렇게 하는게 더 좋대 c++에서는 const float 이걸로 많이 한대 c만 define 더 많이 사용하는듯 ㅇㅇ
int main()
{
    float radius, area, circum;
    
    printf("I'm %s. \n", AI_NAME);
    printf("Input radius\n");
    
    scanf("%f", &radius);
    
    area = PI * radius * radius; // area = pi*r*r
    circum = 2.0f * 3.141592f * radius; // circum = 2.0 * pi * r
    printf("Area is %f\n", area);
    printf("Circumference is %f\n", circum);
    
    //TODO: wrong usage, strings, const
    
    return 0;
    
}

// 4.6 명백한 상수들
// 별로 안중요해서 뺌..
