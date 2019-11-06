/**************************************************************
    Problem: 1084
    User: 18HD1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
int main(){
    int a;scanf("%d",&a);int sum=0;
    for(int i=1;i<=a;i++){
        if(i%5==0)sum+=i;
    };
    printf("%d",sum);
}
// #include <stdio.h>
// int main(){
//     int a;scanf("%d",&a);
//     int s=0;
//     int i=1;
//     while(i <= a){ // i가 a가 크지 않은 한(!=로 놔도 됨)
//         s+=i;
//         i++;
//     }
//     printf("%d", s);
// }
