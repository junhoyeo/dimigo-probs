/**************************************************************
    Problem: 1083
    User: 18HD1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
int main(){int a,b;scanf("%d %d",&a,&b);if(a<b){int t=a;a=b;b=t;}
for(int i=b;i<=a;i++){
    if(i==a)printf("%d",i);
    else printf("%d ",i);
}}
#include <stdio.h>

int main()
{
    int a=0;
    int b=0;
    scanf("%d %d", &a, &b);
    if ( a < b ) {
        int t = a;
        a = b;
        b = t; //임시 변수 t를 이용해서 값 교환 
    }
    // 즉, a는 둘 중 더 큰 값이, b는 더 작은 값이 저장됨 
    for(int i=b; i<=a; i++){
        if(i==a) printf("%d", i);
        else printf("%d ", i);
    }
}