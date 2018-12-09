/**************************************************************
    Problem: 1178
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
// #include <math.h>
#define AM(X) (X)*(X)
#define BM(X) (X)*(X)*(X)
int gugu(){
    int sum=0;
    for(int i=0;i<5;i++){
        int t;scanf("%d",&t);
        sum += abs(t);
    }
    return sum;
}
int main(){
    printf("%d",gugu());
}