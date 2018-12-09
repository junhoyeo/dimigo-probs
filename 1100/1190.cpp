/**************************************************************
    Problem: 1190
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
// #define pi 3.141592
// int ud(double n){
//     return floor(n+0.5);
// }
void gugu(int n){
    if (n<1) return;
    gugu(n-1);
    if(n%2==0)printf("%d ", n);
}
void gugu2(int n){
    if (n<1) return;
    gugu2(n-1);
    if(n%2!=0)printf("%d ", n);
}
int main(){
    int a;scanf("%d",&a);
    if (a%2==0) gugu(a);
    else gugu2(a);
}