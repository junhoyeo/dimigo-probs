/**************************************************************
    Problem: 1190
    User: 18HD1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
void g(int n){
    if (n<1) return;
    g(n-1);
    if(n%2==0)printf("%d ", n);
}
void g2(int n){
    if (n<1) return;
    g2(n-1);
    if(n%2!=0)printf("%d ", n);
}
int main(){
    int a;scanf("%d",&a);
    if (a%2==0) g(a);
    else g2(a);
}