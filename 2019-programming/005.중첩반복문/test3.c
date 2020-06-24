#include <stdio.h>
int is_prime(int p){
	for (int j=2;j<=p;j++) {
		if (p == j)
			return 1;
		else if (p % j == 0)
			return 0;
	}
	return 0;
}
int main() {
	int k;
	scanf("%d", &k);
	for(int i=2;i<=k;i++){
		if (k%i==0) { // 나누어지는 수
			if (is_prime(i))
				printf("%d ", i);
		}
	}
}
