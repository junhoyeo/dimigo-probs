#include <stdio.h>
int main() {
	int a,b;scanf("%d%d",&a,&b);
	int q=a/b; int r=a%b;
	while(r!=0){
		a=b;b=r;q=a/b;r=a%b;
	}
	printf("%d",b);
}
