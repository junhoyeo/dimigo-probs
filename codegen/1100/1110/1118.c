/**************************************************************
    Problem: 1118
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
int main(){
char a[10];
for (int i=0;i<10;i++){
scanf(" %c",&a[i]);
}
printf("%c %c %c",a[0],a[3],a[6]);
}