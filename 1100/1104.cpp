/**************************************************************
    Problem: 1104
    User: 18HD1520
    Language: C++
    Result: Accepted
    Time:4 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
int main(){int n;scanf("%d",&n);int i,j;
for(i=1;i<n+1;i++){
    for(j=0;j<n-i;j++) printf("  ");
    for(j=1;j<=i;j++) printf("%d ", j);
    printf("\n");
}}