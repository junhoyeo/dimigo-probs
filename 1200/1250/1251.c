/**************************************************************
    Problem: 1251
    User: 18HD1520
    Language: C
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
#include <math.h>
int main(){int a,b;scanf("%d%d",&a,&b);if(a>b){int t=a;a=b;b=t;}printf("%d",abs(b-a));}
// 포인터 안 써도 안 걸림
