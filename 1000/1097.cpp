/**************************************************************
    Problem: 1097
    User: 18HD1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
int main(){int n;scanf("%d",&n);int idx=0;
for(int i=0;i<n;i++){
for(int j=n;j>i;j--){printf("%c",65+idx);idx++;}
printf("\n");}}