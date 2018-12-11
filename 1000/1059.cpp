/**************************************************************
    Problem: 1059
    User: 18HD1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
int main(){int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};int a;scanf("%d",&a);printf("%d",month[a-1]);}