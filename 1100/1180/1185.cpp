/**************************************************************
    Problem: 1185
    User: 18HD1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
int g(int n){
    if (n<0) return 0;
    return g(n-1)+n;
}
int main(){int a;scanf("%d",&a);printf("%d",g(a));}