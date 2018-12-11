/**************************************************************
    Problem: 1171
    User: 18HD1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1116 kb
****************************************************************/
 
#include <stdio.h>
#include <math.h>
double g(double w){
    return sqrt(w/3.14);
}
int main(){
    int w;scanf("%d",&w);
    printf("%.2f", g((double)w));
}