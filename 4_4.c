// 4.4 strlen() 함수

#include <stdio.h>
#include <string.h> // strlen and more

int main()
{
    char str1[100] = "Hello";
    char str2[] = "Hello";
    char str3[100] = "\0";
    char str4[100] = "\n";
    
    printf("%zu %zu\n", sizeof(str1), strlen(str1)); //%zu 는 unsigned int 의 출력을 위한 것
    printf("%zu %zu\n", sizeof(str2), strlen(str2)); // strlen 함수는 null character 를 세지 않는다 
    printf("%zu %zu\n", sizeof(str3), strlen(str3)); // 그니까 우리가 입력한 글자 수만 그대로 세준다 -> 출력값 = 0
    printf("%zu %zu\n", sizeof(str4), strlen(str4)); // \0 은 안세지만 ' ' 즉 빈칸은 센다. 빈칸과 널캐릭터는 아예 다르다 
    
    /* Extra */
    char* str5 = (char*)malloc(sizeof(char) * 100);
    str5[0] = 'H'; str5[1] = 'e'; str5[2] = 'l'; str5[3] = 'l'; str5[4] = 'o';
    str5[5] = '\0';
    printf("%zu %zu\n", sizeof(str5), strlen(str5));
    
    return 0;
}
    
