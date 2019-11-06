/**************************************************************
    Problem: 1127
    User: 18HD1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
int main(){int a[10];
for(int i=0;i<10;i++)scanf("%d",&a[i]);
int sum1=0;int sum2=0;
for(int i=0;i<10;i++){if(i%2==0)sum1+=a[i];else sum2+=a[i];}
printf("홀수 번째 합 : %d\n짝수 번째 합 : %d",sum1,sum2);}