/**************************************************************
    Problem: 1103
    User: hack1520
    Language: C++
    Result: Accepted
    Time:4 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
int main(){
int n;scanf("%d",&n);int idx=0;int i,j;
for(i=1;i<=n*2-1;i+=2){
    for(j=n*2-1;j>i;j--)printf(" ");
    for(j=0;j<i;j++)printf("*");
    printf("\n");
}
}