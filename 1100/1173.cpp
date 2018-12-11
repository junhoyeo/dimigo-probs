/**************************************************************
    Problem: 1173
    User: 18HD1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1084 kb
****************************************************************/
 
#include <stdio.h>
void g(){
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++) printf("%d + %d = %d\n", i,j,i+j);
    }
}
int main(){g();}