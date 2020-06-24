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
	int z=0;
  for(int j=0;j<26;j++){
    if (alpha[j] == 0) {
      printf("%c", j+97);
      z=1;
    }
  }
	if(!z) printf("없음");
}
