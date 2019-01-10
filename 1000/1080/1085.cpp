/**************************************************************
    Problem: 1085
    User: 18HD1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
int main(){
    int n;scanf("%d",&n);int sum=0;
    for(int i=0;i<n;i++){int t;scanf("%d",&t);sum+=t;}
    printf("%.2lf",(double)sum/n);
}