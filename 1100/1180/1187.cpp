/**************************************************************
    Problem: 1187
    User: 18HD1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
int g(int n){
    if (n<=1) return 1;
    return g(n/2)+g(n-1);
}
int main(){int a;scanf("%d",&a);printf("%d",g(a));}