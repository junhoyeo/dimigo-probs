#include <stdio.h>
int main() {
	int n;scanf("%d",&n);int sum=0;
	for(int i=1;i<7;i++) // dice 1
		for(int j=1;j<7;j++) // dice 2
			if(n <= i+j) sum++;
	printf("%d",sum);
}
