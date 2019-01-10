/**************************************************************
    Problem: 1198
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
#include <string.h>
int main(){char c[101];int a;scanf("%s",c);scanf("%d",&a);
int len=strlen(c)-1;
for(int i=len;i>=0;i--){
    if(len-i==a) break;
    printf("%c",c[i]);
}}