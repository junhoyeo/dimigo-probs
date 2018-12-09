/**************************************************************
    Problem: 1106
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
int n;scanf("%d",&n);int num=1;int idx=0;
for(int i=1;i<n+1;i++){
    for(int j=0;j<i*2-2;j++)
        printf(" ");
    for(int j=n-i;j>=0;j--){       
        printf("%d ",num++);
    }
    printf("\n");
    }
}