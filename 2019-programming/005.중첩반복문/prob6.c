#include <stdio.h>
int main() {
	int n;scanf("%d",&n);int w=1;
	for(int h=0;h<n;h++){
		for(int i=0;i<w;i++){
			printf("*");
		}
		w++;
		printf("\n");
	}
}
