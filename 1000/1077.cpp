/**************************************************************
    Problem: 1077
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
int main(){
    int a;scanf("%d",&a);
    int s=0;
    for(int i=a;i<=100;i++)s+=i;
    printf("%d",s);
}