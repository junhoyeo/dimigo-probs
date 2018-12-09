/**************************************************************
    Problem: 1179
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
// #include <math.h>
#define AM(X) (X)*(X)
#define BM(X) (X)*(X)*(X)
int gugu(int n){
    int r=2;
    for(int i=1;i<n;i++)
        r*=2;
    return r;
}
int main(){
    int n;scanf("%d",&n);printf("%d",gugu(n));
}