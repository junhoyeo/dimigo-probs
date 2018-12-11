/**************************************************************
    Problem: 1166
    User: 18HD1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
int g(int a,int b){
    if(a<b){int tmp=a;a=b;b=tmp;}
    return a*a-b*b;
}
int main(){
    int n,k;scanf("%d %d",&n,&k);
    printf("%d",g(n,k));
}