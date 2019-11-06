/**************************************************************
    Problem: 1201
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
#include <string.h>
int main(){char c[101];scanf("%s",c);int len=strlen(c);for(int i=0;i<len;i++){if(64<c[i]&&c[i]<91)printf("%c",c[i]);if(96<c[i]&&c[i]<123)printf("%c",c[i]-32);}}