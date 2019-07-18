#include <stdio.h>
int main() {
	int m;
	scanf("%d", &m);
	int a[20][20] = {0,};
	for(int i=0;i<m;i++){
		scanf("%d %d", &a[i][0], &a[i][1]);
	}
	for(int i=0;i<m;i++){
		printf("%d %d ", a[i][0], a[i][1]);
		int sum = a[i][0] + a[i][1];
		if (sum >= 90) printf("A\n");
		else if (sum >= 80) printf("B\n");
		else printf("C\n");
	}
}
