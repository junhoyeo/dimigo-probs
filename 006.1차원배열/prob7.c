#include <stdio.h>
int main() {
	int n;scanf("%d", &n);int arr[n];
	for(int i=0;i<n;i++)
		scanf("%d", &arr[i]);
	int sum=0;
	for(int i=0;i<n-1;i++){
		int t = arr[i+1] - arr[i];
		printf("%d ", t);
		sum+=t;
	}
	printf("\n%d", sum);
}
