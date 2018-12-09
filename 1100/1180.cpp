/**************************************************************
    Problem: 1180
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define AM(X) (X)*(X)
#define BM(X) (X)*(X)*(X)
int ud(double n){
    return floor(n+0.5);
}
void gugu2(double a,double b,double c){
    printf("%d\n",ud((a+b+c)/3));
    printf("%d\n",ud((float)(ud(a)+ud(b)+ud(c))/3));
}
int main(){
    double a,b,c;scanf("%lf %lf %lf",&a,&b,&c);gugu2(a,b,c);
}