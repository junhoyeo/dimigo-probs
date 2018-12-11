/**************************************************************
    Problem: 1093
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
int main(){int n;scanf("%d",&n);
for(int i=0;i<n;i++){
for(int j=1;j<=i+1;j++)printf("*");
printf("\n");}}