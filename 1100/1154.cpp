/**************************************************************
    Problem: 1154
    User: hack1520
    Language: C++
    Result: Accepted
    Time:4 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b){return (*(int*)b-*(int*)a);}
int main(){int a[20];int i;for(i=0;i<20;i++)scanf("%d",&a[i]);
qsort(a,20,sizeof(int),cmp);for(i=0;i<5;i++)printf("%d ",a[i]);
}