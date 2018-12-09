/**************************************************************
    Problem: 1208
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
#include <string.h>
int main(){char a[101];scanf("%s",a);char b[101];scanf("%s",b);
int la=(int)strlen(a);int lb=(int)strlen(b);printf("%d",(la>lb)?la:lb);}