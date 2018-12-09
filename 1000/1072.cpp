/**************************************************************
    Problem: 1072
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
int main(){
    int a=0;
    while(1){
        int n;scanf("%d",&n);
        if (n==0){
            printf("%d",a);
            break;
        }
        else if (n%3!=0 && n%5!=0) a++;
    }
}