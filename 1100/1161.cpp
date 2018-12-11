/**************************************************************
    Problem: 1161
    User: 18HD1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
int func(int *a, int *b){
    if ((*a)>(*b)){
        (*a) = (*a)/2;(*b)*=2;
    }
    else {
        (*b) = (*b)/2;(*a)*=2;
    }
    return 1;
}
int main(){
    int a,b;scanf("%d %d",&a,&b);
    func(&a,&b);printf("%d %d",a,b);
}