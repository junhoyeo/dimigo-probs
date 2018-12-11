/**************************************************************
    Problem: 1102
    User: 18HD1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
int main(){
int n;scanf("%d",&n);int idx=0;int i,j;
for(i=n*2-1;i>0;i-=2){
    for(j=0;j<idx;j++) printf(" ");
    for(j=0;j<i;j++) printf("*");
    printf("\n");
    idx++;}idx--;
for(i=1;i<=n*2-1;i+=2){
    if(i==1) continue;idx--;
    for(j=0;j<idx;j++) printf(" ");
    for(j=0;j<i;j++) printf("*");
    printf("\n");
}
}