#include <stdio.h>

struct BookInfo {
	char name[100];
	int price;
  int num;
};

int main() {
	struct BookInfo book[5];
  int max = 0;
  int max_idx = 0;
	for(int i=0;i<5;i++){
		scanf("%s", &book[i].name);
		scanf("%d", &book[i].price);
		scanf("%d", &book[i].num);

    int value = (book[i].price * book[i].num);
    if (value >= max) {
      max = value;
      max_idx = i;
    }
	}
  printf("%s", book[max_idx].name);
}
