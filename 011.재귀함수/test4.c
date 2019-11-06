#include <stdio.h>

int isPrime(int n, int r){
	if (r <= 0) return 0;
	int res = (n % r == 0) ? 1 : 0;
	res += isPrime(n, r - 1);
  return res;
}

int main() {
	int a;
  scanf("%d",&a);
	printf("%s", isPrime(a, a) == 2 ? "소수":"소수 아님");
}
