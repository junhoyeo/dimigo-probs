/**************************************************************
    Problem: 1160
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
int sum(int a,int b){return a+b;}
int min(int a,int b){return a-b;}
int mul(int a,int b){return a*b;}
int div(int a,int b){return a/b;}
int main(){
    int a,b;char c;scanf("%d %c %d",&a,&c,&b);
    int (*r)(int a,int b);if(c=='+')r=sum;
    else if(c=='-')r=min;else if(c=='*')r=mul;else if(c=='/')r=div;
    else{printf("%d %c %d = 0",a,c,b);return 0;}
    printf("%d %c %d = %d",a,c,b,r(a,b));
}