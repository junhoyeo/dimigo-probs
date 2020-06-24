#include <stdio.h>
int main() {
	int arr[10]; int freq[10] = {0,};
	for(int i=0;i<10;i++){
		scanf("%d", &arr[i]);
		freq[arr[i]]++;
	}
	int max_f = 0; int f = 0;
	for(int i=0;i<10;i++){
		if (freq[i] > max_f){
			max_f = freq[i];
			f = i;
		}
	}
	int c = 0; int max = 0;
	for(int i=0;i<10;i++){
		if (freq[i] == max_f) {
			c++;
			max = (max < i) ? i : max;
		}
	}
	if (c > 1) printf("%d", max);
	else printf("%d", f);
}
