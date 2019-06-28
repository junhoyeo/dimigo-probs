#include <stdio.h>
int main() {
	int a,b;scanf("%d%d",&a,&b);
	for(int i=0;i<b;i++){
		for(int j=0;j<i;j++)printf(" ");
		for(int j=0;j<a;j++){
			if(i!=0 && i!=b-1 && j>0 && j<a-1) printf(" ");
			else printf("*");
		}
		printf("\n");
	}
}
