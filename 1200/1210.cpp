/**************************************************************
    Problem: 1210
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
#include <string.h>
int main(){char a[101];gets(a);int l=strlen(a);int idx=1;printf("%d. ",idx);
for(int i=0;i<l;i++){
  if(a[i]==32)printf("\n%d. ",++idx);
  else printf("%c",a[i]);
}}