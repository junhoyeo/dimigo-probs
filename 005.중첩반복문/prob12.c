#include <stdio.h>
#include <stdbool.h>
int prime(int n){
	for(int i=2;i<n;i++)
		if(n%i==0) return false;
	return true;
}
int main() {
	int n;scanf("%d",&n);int sum=0;
	for(int i=2;i<n;i++)
    if(prime(i)) sum++;
	printf("%d",sum);
}
