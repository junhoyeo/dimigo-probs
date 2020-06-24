#include <stdio.h>
#include <stdlib.h>
int main() {
	char a[11][20];
	int n;scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%s", a[i]);
	}
	for(int i=0;i<n;i++){
		int len = 0;

		for(int j=0;j<20;j++){
			if (a[i][j]==NULL) break;
			len++;
		}
    printf("%c", a[i][len-1]);
	}
}
