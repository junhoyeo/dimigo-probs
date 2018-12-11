/**************************************************************
    Problem: 1099
    User: 18HD1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
int main(){
    int sum=0;
    for(int i=0;i<20;i++){
        int tmp;scanf("%d",&tmp);
        if(tmp==0){printf("%d %d",sum,sum/i);return 0;}
        sum+=tmp;
    }
    printf("%d %d",sum,sum/20);
}