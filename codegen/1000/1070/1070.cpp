/**************************************************************
    Problem: 1070
    User: 18HD1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
int main(){int a=0;int b=0;
while(1){int n;scanf("%d",&n);if(n==0){printf("홀수 : %d개\n짝수 : %d개",b,a);break;}
else if(n%2==0)a++;else b++;}}