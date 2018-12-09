/**************************************************************
    Problem: 1125
    User: hack1520
    Language: C++
    Result: Accepted
    Time:4 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
int main(){
char a[10];int i;
for(i=0;i<10;i++) scanf(" %c",&a[i]);
for(i=9;i>=0;i--){
    if(i==0)printf("%c", a[i]);
    else printf("%c ", a[i]);}
}