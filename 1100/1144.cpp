/**************************************************************
    Problem: 1144
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
int main(){int a[10]={0,};scanf("%d %d",&a[0],&a[1]);int i;
for(i=2;i<10;i++){a[i]=(a[i-1]+a[i-2])%10;}
for(i=0;i<10;i++){printf("%d",a[i]);if(i!=9)printf(" ");}}