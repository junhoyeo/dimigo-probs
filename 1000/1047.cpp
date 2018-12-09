/**************************************************************
    Problem: 1047
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
int main(){
int h,w;scanf("%d %d",&h,&w);
int b = w+100-h;
printf("비만수치는 %d입니다.\n",b);
if(b>0) printf("당신은 비만이군요.");
}