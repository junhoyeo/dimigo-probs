#include <stdio.h>
int f(n) {
	if (n <= 1) return n;
	return f(n-1) + f(n-2);
}

int main(){ // 주노최고
	int a;scanf("%d", &a);int sum=0;
	for(int i=2;;i++){
		int t=f(i);
		if(t>=a) break;
		if((i-1)%2!=0) sum += t;
	}
	printf("%d", sum);
}
