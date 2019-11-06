/**************************************************************
    Problem: 1085
    User: 18HD1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
int main(){
    int n;scanf("%d",&n);
    int sum=0; // 총합을 저장하는 변수 sum
    int t; 
    for(int i=0;i<n;i++){ // n번 반복 
        scanf("%d",&t); 
        // t에 값을 다시 입력받아!
        sum+=t; // t의 값을 sum에 저장해 주자~!
    }
    printf("%.2lf",(double)sum/n); // 형식에 맞게 출력
}
