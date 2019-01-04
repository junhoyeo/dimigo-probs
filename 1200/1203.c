/**************************************************************
    Problem: 1203
    User: 18HD1520
    Language: C
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
#include <string.h>
int main(){
    char p[101];scanf("%s",p);int l=strlen(p);
    for(int i=1;i<l+1;i++){
        for(int j=l-i;j<l;j++) printf("%c",p[j]);
        for(int j=0;j<l-i;j++) printf("%c",p[j]);
        printf("\n");
    }
}
