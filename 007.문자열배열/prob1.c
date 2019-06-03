#include <stdio.h>
// #include <string.h>
int main() {
	char input[21];
  scanf("%s", &input);
  // printf("%d", strlen(input));
	int len = 0;
	for(int i=0;;i++){
		if (input[i] == '\0') break;
		len++;
	}
	printf("%d", len);
}
