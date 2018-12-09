/**************************************************************
    Problem: 1051
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
int main(){
char g;int a;scanf("%c %d",&g,&a);
if (a>=18){
    if (g=='M') printf("MAN");
    else printf("WOMAN");
}
else{
    if (g=='M') printf("BOY");
    else printf("GIRL");
}
}