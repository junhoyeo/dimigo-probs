/**************************************************************
    Problem: 1079
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;scanf("%d",&n);
    int sum = 0;
    for(int i=0;i<n;i++){
        int tmp;scanf("%d",&tmp);sum+=tmp;
    }
    double p=(double)sum/n;
    printf("평균 : %.1lf\n",p);
    if(p>=80) printf("합격");
    else printf("불합격");
}