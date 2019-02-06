/**************************************************************
    Problem: 1253
    User: 18HD1520
    Language: C
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
int main(){int n;scanf("%d",&n);int a=0,b=99;for(int i=0;i<n;i++){int t;scanf("%d",&t);if(t>a)a=t;if(t<b)b=t;}printf("최대값 : %d\n최소값 : %d",a,b);}
// VLA 안써도 모름
