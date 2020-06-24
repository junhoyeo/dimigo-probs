#include <stdio.h>
int main() { // 배열 쓰면 더 귀찮음 ㅅㄱ링zx
	int t, sum=0;
	for(int i=0;i<7;i++){
		scanf("%d",&t); sum+=t;
	}
	float aver=sum/7.0;
	printf("%d\n%.2f",sum,aver);
}
