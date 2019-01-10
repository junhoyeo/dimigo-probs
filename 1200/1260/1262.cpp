/**************************************************************
    Problem: 1262
    User: 18HD1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
int main(){
    int a,b,r;char c;scanf("%d %d %c",&a,&b,&c);
    if(c=='+')r=a+b;else if(c=='-')r=a-b;else if(c=='/')r=a/b;else if(c=='%')r=a%b;else r=a*b;
    printf("%d %c %d = %d",a,c,b,r);
}