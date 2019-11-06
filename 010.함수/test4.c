#include <stdio.h>

int CommonDivisorNum(int n, int m) {
	int sum = 0;
 for(int i=1;i<=m;i++)
	 if(m%i==0 && n%i==0)
		 sum++;
	return sum;
}

int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d", CommonDivisorNum(a, b));
	return 0;
}
