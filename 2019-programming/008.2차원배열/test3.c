#include <stdio.h>
int main() {
	int m;
	scanf("%d", &m);
	int a[20][20] = {0,};
	for(int i=0;i<m;i++){
		scanf("%d %d %d", &a[i][0], &a[i][1], &a[i][2]);
	}
	int high = 0;
	int idx = 1;
	for(int i=0;i<m;i++){
		int sum = a[i][0] + a[i][1] + a[i][2];
		if (sum > high) {
			high = sum;
			idx = i + 1;
		}
	}
	printf("%d", idx);
}
