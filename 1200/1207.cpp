/**************************************************************
    Problem: 1207
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
#include <string.h>
int main(){char a[101];scanf("%s",a);char b;scanf(" %c",&b);int l=strlen(a);for(int i=0;i<l;i++){
    if(a[i]==b){printf("%d",i);return 0;}
}printf("No");}