/**************************************************************
    Problem: 1164
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
int gugu(int a){
    int sum=0;
    for(int i=1; i<=a;i++) sum+=i;
    return sum;
}
int main(){
    int n;scanf("%d",&n);
    printf("%d",gugu(n));
}