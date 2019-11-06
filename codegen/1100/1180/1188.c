/**************************************************************
    Problem: 1188
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
int g(int n){if(n==0)return 0;else return ((n%10)*(n%10))+g(n/10);}
int main(){int n;scanf("%d",&n);printf("%d",g(n));}