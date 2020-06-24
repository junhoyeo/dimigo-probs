#include <stdio.h>
int main() {
	int m;
	scanf("%d", &m);
	int a[21][21] = {0,};
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(int i=0;i<=m;i++){
		int n=0;
		for(int j=0;j<m;j++){
			printf("%d ", a[i][j]);
			a[m][j] += a[i][j];
			n+=a[i][j];
		}
		if (i!=m)
			printf("%d \n", n);
		else printf(" \n");
	}
}
