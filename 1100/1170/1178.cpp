/**************************************************************
    Problem: 1178
    User: 18HD1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
int g(){
    int sum=0;
    for(int i=0;i<5;i++){
        int t;scanf("%d",&t);
        sum += abs(t);
    }
    return sum;
}
int main(){
    printf("%d",g());
}