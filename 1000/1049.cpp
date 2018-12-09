/**************************************************************
    Problem: 1049
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
int main(){
double w;scanf("%lf",&w);
if(w<=50.80) printf("플라이급");
else if(w<=61.23) printf("라이트급");
else if(w<=72.57) printf("미들급");
else if (w<=88.45) printf("크루저급");
else printf("헤비급");
}