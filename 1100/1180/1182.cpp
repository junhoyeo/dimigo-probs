/**************************************************************
    Problem: 1182
    User: 18HD1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
#define pi 3.141592
void g(double r){printf("원의 넓이 = %.3lf",r*r*pi);}
int main(){printf("원의 반지름 : ");double a;scanf("%lf",&a);g(a);}