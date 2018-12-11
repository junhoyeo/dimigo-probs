/**************************************************************
    Problem: 1180
    User: 18HD1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
#include <math.h>
int ud(double n){return floor(n+0.5);}
void g(double a,double b,double c){
    printf("%d\n",ud((a+b+c)/3));
    printf("%d\n",ud((float)(ud(a)+ud(b)+ud(c))/3));
}
int main(){double a,b,c;scanf("%lf %lf %lf",&a,&b,&c);g(a,b,c);}