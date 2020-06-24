#include <stdio.h>
int main() {
	int a[10];
	for(int i=0;i<10;i++)
		scanf("%d",&a[i]);
	int max=a[0];int min=a[0];
	int max_idx=0;int min_idx=0;
	for(int i=1;i<10;i++){
		if(max < a[i]){
			max = a[i];
			max_idx = i;
		}
		if(min > a[i]){
			min = a[i];
			min_idx = i;
		}
	}
	a[max_idx] = min;
	a[min_idx] = max;
	for(int i=0;i<10;i++)
		printf("%d ",a[i]);
}
