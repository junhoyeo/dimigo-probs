/**************************************************************
    Problem: 1195
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
int main(){
    while (1){
        printf("아스키 코드 =? ");
        int c;scanf("%d",&c);
        if(c<33 || c>127) return 0;
        printf("%c\n",c);
    }
}