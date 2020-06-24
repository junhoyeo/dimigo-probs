#include <stdio.h>
int main() {
	int n;scanf("%d",&n);
	for(int i=0;i<n;i++){ // 0* 1 2* 3
		if(i%2==0) for(int j=n*i+1;j<=n*(i+1);j++) printf("%2d ", j); // *
	  else for(int j=n*(i+1);j>n*i;j--) printf("%2d ", j);
		printf("\n");
	}
}
