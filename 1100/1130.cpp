/**************************************************************
    Problem: 1130
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
int main(){
    char c[6]={'J', 'U', 'N', 'G', 'O', 'L'};
    char p;scanf("%c",&p);
    for(int i=0;i<6;i++){
        if(c[i]==p){
            printf("%d",i);
            return 0;
        }
    }
    printf("없는 문자입니다.");
}