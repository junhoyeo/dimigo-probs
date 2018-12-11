/**************************************************************
    Problem: 1060
    User: 18HD1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
int main(){int a,b,c;scanf("%d %d %d",&a,&b,&c);int aver=(a+b+c)/3;
if(aver>59&&a>39&&b>39&&c>39)printf("합격");else printf("불합격");}