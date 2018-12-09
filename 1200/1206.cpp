/**************************************************************
    Problem: 1206
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
#include <string.h>
int main(){char a[101];scanf("%s",a);int l=strlen(a);for(int i=0;i<l;i++){
    if((47<a[i]&&a[i]<58) || (96<a[i]&&a[i]<123))printf("%c",a[i]);
    if(64<a[i]&&a[i]<91)printf("%c",a[i]+32);
}}