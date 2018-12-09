/**************************************************************
    Problem: 1200
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
int main(){while(1){char tmp;scanf(" %c",&tmp);if((64<tmp&&tmp<91)||(96<tmp&&tmp<123))printf("%c\n",tmp);else if(47<tmp&&tmp<58)printf("%d\n",tmp);else return 0;}}