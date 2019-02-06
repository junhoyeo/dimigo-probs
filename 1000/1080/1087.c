#include <stdio.h>
int main() {
    int a,b;scanf("%d%d",&a,&b);
    if (a<b){int t=a;a=b;b=t;}
    int sum=0;int idx=0;
    for(int i=b;i<=a;i++){
        if(i%3==0 || i%5==0){
            idx++;
            sum+=i;
        }
    }
    printf("합계 : %d\n평균 : %.1lf",sum,sum/(double)idx);
}
