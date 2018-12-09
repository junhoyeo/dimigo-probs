/**************************************************************
    Problem: 1142
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
int main(){int a[6]={0,};int i;
for(i=0;i<10;i++){
    int tmp;scanf("%d",&tmp);
    a[tmp-1]++;
    }
for(i=0;i<6;i++)printf("%d : %d번\n",i+1,a[i]);
}