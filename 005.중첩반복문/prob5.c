#include <stdio.h>
int main() {
	int n;scanf("%d",&n);
	int idx=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++)
			printf("%3d",idx++);
		printf("\n");
	}
}
