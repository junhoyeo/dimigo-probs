/**************************************************************
    Problem: 1041
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
int main(){
    int a,b;scanf("%d %d",&a,&b);
    printf("%d %.2lf",a/b,(double)a/b);
    // a/b: 결과값은 int로 값 손실이 발생
    // (double)a/b: 결과값이 자료형 double을 가짐
}