#include <stdio.h>
int main() {
	char input[101];
  scanf("%s", input);
	int offset = 32;
	for(int i=0;;i++){
		if (input[i] == '\0') break;
		if (65 <= input[i] && input[i] <= 90) input[i] += offset;
		else if (97 <= input[i] && input[i] <= 122) input[i] -= offset;
	}
	printf("%s", input);
}
