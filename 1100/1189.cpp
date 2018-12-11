/**************************************************************
    Problem: 1189
    User: 18HD1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
void g(int n){
    if (n<1) return;
    g(n/2);printf("%d ", n);
}
int main(){int a;scanf("%d",&a);g(a);}