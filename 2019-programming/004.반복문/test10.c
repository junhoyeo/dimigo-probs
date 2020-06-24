#include <stdio.h>

int count_one(int n){
	int cnt = 0;
	int i = 0;
	while (n != 0) {
		if (i > 1) break;
		if (n % 10 == 1) cnt ++;
		n /= 10; i++;
	}
	return cnt;
}

int main() {
  int a; scanf("%d",&a);
	int result = 0;
	for(int i=0;i<=a;i++)
    result += count_one(i);
	printf("%d", result);
}
