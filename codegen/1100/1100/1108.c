/**************************************************************
    Problem: 1108
    User: 18HD1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
int main(){int n;scanf("%d",&n);int idx=1;
for(int i=0;i<n;i++){
for(int i=0;i<n;i++){
    printf("%d ",idx);
    idx+=2; if(idx==11)idx-=10;
}
printf("\n");}}