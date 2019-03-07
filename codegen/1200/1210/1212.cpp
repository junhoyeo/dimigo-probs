/**************************************************************
    Problem: 1212
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
#include <string.h>
int main(){char a[101];gets(a);int l=strlen(a);int idx=1;
for(int i=0;i<l;i++){
  if(a[i]==32){if(idx%2!=0)printf("\n");idx++;}
  else if(idx%2!=0)printf("%c",a[i]);
}}