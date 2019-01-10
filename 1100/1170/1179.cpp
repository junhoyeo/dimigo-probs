/**************************************************************
    Problem: 1179
    User: 18HD1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
int g(int n){
    int r=2;
    for(int i=1;i<n;i++)r*=2;
    return r;
}
int main(){int n;scanf("%d",&n);printf("%d",g(n));}