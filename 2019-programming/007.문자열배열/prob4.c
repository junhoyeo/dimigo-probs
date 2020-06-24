#include <stdio.h>
int main() {
	char input[101]; scanf("%s", input);
	int key; scanf("%d", &key);
	for(int i=0;;i++){
		if (input[i] == '\0') break;
		if (input[i] >= 97 && input[i] <= 122 && input[i] + key > 122)
			input[i] += key - (122 - 96);
		else if (input[i] >= 65 && input[i] <= 90 && input[i] + key > 90)
			input[i] += key - (90 - 64);
		else input[i] += key;
	}
	printf("%s", input);
}
