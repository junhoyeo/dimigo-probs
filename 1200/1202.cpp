/**************************************************************
    Problem: 1202
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
#include <string.h>
int main(){char c[101];gets(c);int len=strlen(c);int s=0;for(int i=0;i<len;i++){if(c[i]==32)s++;}printf("%d",s+1);}