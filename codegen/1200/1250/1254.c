/**************************************************************
    Problem: 1254
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
int main(){
int a;int b;scanf("%d %d",&a,&b);int sum=0;
if(a<b){int tmp=b;b=a;a=tmp;}
for(int i=b;i<=a;i++)sum+=i;
printf("%d",sum);
}