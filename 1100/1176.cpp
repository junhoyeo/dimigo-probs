/**************************************************************
    Problem: 1176
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a,const void *b){return (*(int*)b-*(int*)a);}
int main(){int n;scanf("%d",&n);int a[n];for(int i=0;i<n;i++)scanf("%d",&a[i]);
qsort(a,n,sizeof(int),cmp);for(int i=0;i<n;i++){printf("%d",a[i]);if(i!=n-1)printf(" ");}}