/**************************************************************
    Problem: 1124
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
// #include <math.h>
int cmp(const void *a,const void *b){return (*(int*)b-*(int*)a);}
int main(){
int a[10];
for(int i=0;i<10;i++)scanf("%d",&a[i]);
qsort(a,10,sizeof(int),cmp);
for(int i=0;i<10;i++){printf("%d",a[i]);if(i!=9)printf(" ");}
}