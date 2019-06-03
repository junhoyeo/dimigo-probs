#include <stdio.h>
int main() {
	char haystack[101];
  scanf("%s", haystack);
	char needle;
	scanf(" %c", &needle);
	int res = 0;
	for(int i=0;;i++){
		if (haystack[i] == '\0') break;
		if (haystack[i] == needle) res++;
	}
	printf("%d", res);
}
