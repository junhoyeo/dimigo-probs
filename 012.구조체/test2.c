#include <stdio.h>
#include <string.h>

struct ShoppingList {
	char name[100];
	char type[100];
  int num;
};

int main() {
  int n; scanf("%d", &n);
	struct ShoppingList shop[10];
	for(int i=0;i<n;i++){
		scanf("%s", &shop[i].name);
		scanf("%s", &shop[i].type);
		scanf("%d", &shop[i].num);
	}
	char query[100];
	scanf("%s", &query);
	int sum = 0;
	for(int i=0;i<n;i++)
		if (!strcmp(shop[i].type, query))
			sum += shop[i].num;
  printf("%d", sum);
}
