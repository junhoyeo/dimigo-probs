/**************************************************************
    Problem: 1182
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// #define AM(X) (X)*(X)
// #define BM(X) (X)*(X)*(X)
#define pi 3.141592
// int ud(double n){
//     return floor(n+0.5);
// }
void gugu(double r){
    printf("원의 넓이 = %.3lf",r*r*pi);
}
int main(){
    printf("원의 반지름 : ");
    double a;scanf("%lf",&a);gugu(a);
}