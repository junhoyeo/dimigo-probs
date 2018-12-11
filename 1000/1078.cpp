/**************************************************************
    Problem: 1078
    User: 18HD1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
int main(){
    int t=0;int f=0;
    for(int i=0;i<10;i++){
        int a;scanf("%d",&a);
        if(a%3==0)t++;
        if(a%5==0)f++;
    }
    printf("3의 배수 : %d개\n5의 배수 : %d개",t,f);
}