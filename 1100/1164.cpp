/**************************************************************
    Problem: 1164
    User: 18HD1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
int g(int a){
    int sum=0;
    for(int i=1; i<=a;i++) sum+=i;
    return sum;
}
int main(){int n;scanf("%d",&n);printf("%d",g(n));}