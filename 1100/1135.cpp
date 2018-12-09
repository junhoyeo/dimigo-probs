/**************************************************************
    Problem: 1135
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
int main(){int a[26]={0,};
while(1){char tmp;scanf(" %c",&tmp);
if(tmp<65 || tmp>65+25){
    for(int i=0;i<26;i++)
        if(a[i]!=0)printf("%c : %d개\n",i+65,a[i]);
return 0;}a[tmp-65]++;}}