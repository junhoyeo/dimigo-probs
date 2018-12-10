/**************************************************************
    Problem: 1257
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
#include <string.h>
int main(){
    char a[101];char b[101];gets(a);gets(b);
    if(strlen(a)>strlen(b))printf("%s\n%s",b,a);
    else printf("%s\n%s",a,b);
}