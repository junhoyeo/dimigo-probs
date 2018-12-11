/**************************************************************
    Problem: 1123
    User: 18HD1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
int main(){int a[10];for(int i=0;i<10;i++)scanf("%d",&a[i]);
int sum1=0;int sum2=0;
for(int i=0;i<10;i++){
if((i+1)%2==0) sum1+=a[i];
else sum2+=a[i];
}printf("짝수번째 합 : %d\n홀수번째 평균 : %.1lf",sum1,(double)sum2/5);}