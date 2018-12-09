/**************************************************************
    Problem: 1175
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
#define AM(X) (X)*(X)
#define BM(X) (X)*(X)*(X)
// void gugu(){
//     for(int i=1;i<=3;i++){
//         for(int j=1;j<=3;j++){
//             printf("%d + %d = %d\n", i,j,i+j);
//         }
//     }
// }
int main(){
    int a,b;scanf("%d %d",&a,&b);
    printf("(%d - %d) ^ 2 = %d\n", a,b,AM(a-b));
    printf("(%d + %d) ^ 3 = %d\n", a,b,BM(a+b));
}