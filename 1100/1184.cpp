/**************************************************************
    Problem: 1184
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
    if (n==0) return;
    printf("%d", n);
    if (n!=1) printf(" ");
    gugu(n-1);
}
int main(){
    int a;scanf("%d",&a);gugu(a);
}