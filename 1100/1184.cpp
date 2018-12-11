/**************************************************************
    Problem: 1184
    User: 18HD1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
void g(int n){
    if (n==0) return;
    printf("%d", n);
    if (n!=1) printf(" ");
    g(n-1);
}
int main(){int a;scanf("%d",&a);g(a);}