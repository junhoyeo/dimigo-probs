#include <stdio.h>
int main() {
	int n;scanf("%d", &n);
	for(int i=2;i<n;i++){
		if (n%i==0) break;
		else if (i==n-1) {
			printf("소수이다.");
			return 0;
		}
	}
	printf("소수가 아니다.");
}
