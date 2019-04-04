#include <stdio.h>
int main() {
	int s=0;
	while (1){
		int a;scanf("%d",&a);
		if(a<0) break;
		s+=a;
	}
	printf("%d",s);
}
