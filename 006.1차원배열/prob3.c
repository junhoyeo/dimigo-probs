#include <stdio.h>
int main() {
	int n;scanf("%d",&n);
	int a[10]={0,};
	for(int i=0;i<n;i++){
		int t;scanf("%d",&t);
		a[t]++;
	}
	for(int i=0;i<10;i++)printf("%d ",a[i]);
}
