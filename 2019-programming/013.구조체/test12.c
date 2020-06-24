#include <stdio.h>
#include <string.h>

struct SmartFarm {
	char name[100];
	int n;
  int p;
};

int CalProfit(struct SmartFarm foods[5], char name[100]) {
	for(int i=0;i<5;i++)
		if (!strcmp(foods[i].name, name))
			return foods[i].n * foods[i].p;
  return 0;
}

int main() {
  struct SmartFarm foods[5];
  for(int i=0;i<5;i++){
    scanf("%s", &foods[i].name);
    scanf("%d", &foods[i].n);
    scanf("%d", &foods[i].p);
  }
  char name[100];
  scanf("%s", &name);
  int res = CalProfit(foods, name);
  printf("%d", res);
}
