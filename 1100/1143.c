/**************************************************************
    Problem: 1143
    User: 18HD1520
    Language: C
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
int main(){int s[11]={0,};while(1){int n;scanf("%d",&n);if(n==0){for(int i=10;i>=0;i--){if(s[i]>0)printf("%d점 이상 : %d명\n",i*10,s[i]);}return 0;}for(int i=10;i>=0;i--){if(n>=i*10){s[i]++;break;}}}}
