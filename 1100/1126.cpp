/**************************************************************
    Problem: 1126
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
int main(){
int a[5];
for(int i=0;i<5;i++) scanf("%d",&a[i]);
printf("%d",a[0]+a[2]+a[4]);
}