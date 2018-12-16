/**************************************************************
    Problem: 1034
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
int main(){int a,b,c;scanf("%d %d %d",&a,&b,&c);if(a>b&&a>c)printf("1");else printf("0");if(a==b&&b==c)printf(" 1");else printf(" 0");}