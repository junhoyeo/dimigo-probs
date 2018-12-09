/**************************************************************
    Problem: 1043
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
int main(){
    double a,b,c;scanf("%lf %lf %lf",&a,&b,&c);
    printf("총점 %d점\n",(int)a+(int)b+(int)c);
    printf("평균 %d점", (int)(a+b+c)/3);
}