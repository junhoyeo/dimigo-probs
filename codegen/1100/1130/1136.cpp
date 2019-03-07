/**************************************************************
    Problem: 1136
    User: 18HD1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
int main(){int a[10]={0,};
while(1){int tmp;scanf("%d",&tmp);
if(tmp==0){for(int i=0;i<10;i++)
if(a[i]!=0)printf("%d : %d개\n",i,a[i]);
return 0;}a[tmp/10]++;}}