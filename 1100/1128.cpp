/**************************************************************
    Problem: 1128
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
int main(){
    int a[100];
    for(int i=0;i<101;i++){
        scanf("%d", &a[i]);
        if(a[i]==-1){
            if (i <= 3){
                for(int j=0;j<i;j++){
                    if (j==i-1) printf("%d", a[j]);
                else printf("%d ", a[j]);
                }return 0;
            }
            else {
            for(int j=i-3;j<i;j++){
                if (j==i-1) printf("%d", a[j]);
                else printf("%d ", a[j]);
            }
            return 0;
            }
        }
    }
}