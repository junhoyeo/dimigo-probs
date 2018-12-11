/**************************************************************
    Problem: 1054
    User: 18HD1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
int main(){int a,b,c;scanf("%d %d %d",&a,&b,&c);int m=(a<b)?a:b;m=(m<c)?m:c;printf("%d",m);}