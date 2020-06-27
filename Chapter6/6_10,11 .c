// 6.10 다양한 대입 연산자들 (그리고 어셈블리 코드 확인법)

int main()
  {
    int i = 1024;
    
    i = i + 10;
    i += 10; 
    // 위 두개의 문장중에 뭐가 더 속도가 빠른지 체크하려면 디버거를 찍고 어셈블리어로 들어가면 됨
    // debug - windows - Disassembly(Alt+8)
    // 나중에 최적화할때 속도 비교하는건데 아직은 의미 없는듯
  }   

// 6.11 콤마 연산자
   int i, j;
   
   i = 1;
   i++, j = i; // comma is a sequence point
   // 이거 위에서 , 만나면 i + 1 된다음에 j로 들어감 콤마도 시퀀스포인트임 ㅇㅇ
   printf("%d %d \n", i, j);
   
   int x, y, z;
   z = x = 1, y = 2; // 대입연산자는 방향이 오른쪽에서 왼쪽이라 x에 1 들어가고 z에 x값 들어가고
   // , 연산자는 방향 왼쪽에서 오른쪽임ㅇㅇ
   printf("x=%d, y=%d, z=%d \n", x, y, z);
   //중요한거!
   z = ((x = 1), (y = 2));   // 콤마연산자는 표현식중에 가장 오른쪽거가 전체 표현식의 값임 z = 2
   printf("x=%d, y=%d, z=%d \n", x, y, z);
   
   int my_money = (123, 456); // 456
   printf("%d\n", my_money);

   
    
    
    
