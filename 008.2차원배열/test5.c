#include <stdio.h>
#include <stdlib.h>
int main() {
	char a[5][20];
	for(int i=0;i<5;i++){
		scanf("%s", a[i]);
	}
	int alpha[26] = {0,};
	for(int i=0;i<5;i++){
		int len = 0;

		for(int j=0;j<20;j++){
			if (a[i][j]==NULL) break;
			len++;
		}
		for(int j=0;j<len;j++){
			alpha[a[i][j] - 97]++;
		}
	}
	int max=0; char ch;
  for(int j=0;j<26;j++){
    if (alpha[j] > max) {
      max = alpha[j];
      ch = j + 97;
    }
  }
  printf("%c", ch);
}
