/**************************************************************
    Problem: 1211
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
#include <string.h>
int main(){char a[5][31];
for(int i=0;i<5;i++)scanf("%s",a[i]);
for(int i=5;i>=0;i--){
    printf("%s",a[i]);
    if(i!=5) printf("\n");}
}