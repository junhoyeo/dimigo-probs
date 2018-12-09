/**************************************************************
    Problem: 1185
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
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
int gugu(int n){
    if (n<0) return 0;
    return gugu(n-1)+n;
}
int main(){
    int a;scanf("%d",&a);printf("%d", gugu(a));
}