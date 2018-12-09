/**************************************************************
    Problem: 1117
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1084 kb
****************************************************************/
 
#include <stdio.h>
int main(){
int a[10] = {1,2,3,4,5,6,7,8,9,10};
for (int i=0;i<10;i++){
    if (i==9) printf("%d", a[i]);
else printf("%d ",a[i]);
}
}