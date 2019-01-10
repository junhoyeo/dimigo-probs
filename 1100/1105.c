/**************************************************************
    Problem: 1105
    User: 18HD1520
    Language: C
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
int main(){
int n;scanf("%d",&n);int a=65;int b=0;
for(int i=0;i<n;i++){
for(int j=0;j<n-i;j++) printf("%c ",a++);
for(int j=0;j<i;j++) printf("%d ", b++);
printf("\n");
}}
