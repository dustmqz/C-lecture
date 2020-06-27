// 6.12 제논의 역설 시뮬레이션 예제
// 제논의 역설
// 다음 올때 예제 풀어보고 11강 다시 듣고 넘어가기

#include <stdio.h>

int main()
{
  const double Speed = 1.0;
  int repeat_time = 0;
  
  double time = 0.0; //시간
  double distance = 0.0; //거리
  double dt = 1.0; // 시간 간격
  
  for (repeat_time = 10; repeat_time > 0; --repeat_time)
  {
  	distance += Speed * dt;
  	time += dt; 
  	
    printf("Elapsed time = %.10fs, Distance = %.10fm\n", time, distance);
    
    dt *= 0.5;
  }
}
// 응 못품 ㅋㅋ
//2단계 ㄱ

#include <stdio.h>

int main()
{
  const double speed = 1.0;
  const unsigned repeat_max = 50;
  
  double time = 0.0;
  double dist_arch = 0.0;
  double dist_turtle = 1.0;
  double speed_arch = 10.0;
  double speed_turtle = 0.001;
  double dt = 0.01;
  unsigned i;
  
  printf("Time = %fs, dt = %fs, Archilleus = %fm, turtle = %fm\n",
         time, dt, dist_arch, dist_turtle);
  
  for (i = 0; i < repeat_max; ++i){
    dist_arch += speed_arch * dt;
    dist_turtle += speed_turtle * dt;
    time += dt;
    printf("Time = %fs, dt = %fs, Archilleus = %fm, turtle = %fm\n",
         time, dt, dist_arch, dist_turtle);
    dt *= 0.5;
  }
}

//했는데 너무 어렵당 ㅜ
  









