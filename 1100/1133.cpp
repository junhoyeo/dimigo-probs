/**************************************************************
    Problem: 1133
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
int main(){
    int a[100];int sum=0;int five=0;
    for(int i=0;i<101;i++){
        scanf("%d", &a[i]);
        if(a[i]==0){
            printf("%d개\n",i);
            for(int j=0;j<i;j++){
                if (a[j]%2==0) printf("%d ", a[j]/2);
                else printf("%d ", a[j]*2); 
            }
            break;
        }
    }
}