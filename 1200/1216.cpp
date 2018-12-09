/**************************************************************
    Problem: 1216
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1120 kb
****************************************************************/
 
#include <stdio.h>
#include <string.h>
int main(){char a[101];scanf("%s",a);char b[101];scanf("%s",b);strncpy(b,a,2);strncat(b,a,2);printf("%s",b);}