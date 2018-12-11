/**************************************************************
    Problem: 1071
    User: 18HD1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
int main(){int sum=0;int idx=0;while(1){int tmp;scanf("%d",&tmp);
if(tmp>100||tmp<0){printf("합계 : %d점\n평균 : %.1lf점",sum,(double)sum/idx);
return 0;}sum+=tmp;idx++;}}