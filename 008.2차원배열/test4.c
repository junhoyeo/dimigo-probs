#include <stdio.h>
#include <stdlib.h>
int main() {
	char a[5][20];
	for(int i=0;i<5;i++){
		scanf("%s", a[i]);
	}
	for(int i=0;i<5;i++){
		int len = 0;
		int min = 999;
		char ch;
		for(int j=0;j<20;j++){
			if (a[i][j]==NULL) break;
			len++;
		}
		for(int j=0;j<len;j++){
			int score = abs(122-a[i][j]);
			if (score < min) {
				min = score;
				ch = a[i][j];
			}
		}
		printf("%c", ch);
	}
}
