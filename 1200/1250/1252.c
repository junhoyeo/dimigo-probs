/**************************************************************
    Problem: 1252
    User: 18HD1520
    Language: C
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
int main(){int a=0,b=0;for(int i=0;i<10;i++){int t;scanf("%d",&t);if(t%2==0)a++;else b++;}printf("홀수 : %d개\n짝수 : %d개",b,a);}
// 포인터 안 써도 안 걸림
