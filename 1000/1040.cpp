/**************************************************************
    Problem: 1040
    User: 18HD1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
int main(){double a,b;scanf("%lf%lf",&a,&b);printf("%d %d",(int)(a*b),(int)a*(int)b);}
/* (int)(a*b): double 자료형으로 a*b를 계산하고 int로 바꿈
(int)a*(int)b: a, b를 각각 int로 바꿔서 계산 -> 값 손실이 발생*/