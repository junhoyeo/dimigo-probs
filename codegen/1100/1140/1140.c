/**************************************************************
    Problem: 1140
    User: 18HD1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
int main(){
    double s[5];
    for(int i=0;i<5;i++){
        int sum = 0;
        for(int j=0;j<4;j++){
            int tmp;scanf("%d",&tmp);sum+=tmp;
        }
        s[i] = (double)sum/4;
    }
    int r=0;
    for(int i=0;i<5;i++){
        if(s[i]>=80){
            printf("합격\n");
            r++;
        }
        else printf("불합격\n");
    }
    printf("합격자 %d명", r);
}