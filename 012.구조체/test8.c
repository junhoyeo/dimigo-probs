#include <stdio.h>

struct PersonInfo {
	char name[100];
	int age;
  int month;
  int day;
};

int main() {
	struct PersonInfo p;
  scanf("%s", &p.name);
  int year;
  int div;
  int rest;
  scanf("%2d%2d%2d-%1d%d", &year, &p.month, &p.day, &div, &rest);
  p.age = 2019 - (year + ((div > 2) ? 2000 : 1900));
  printf("이름 : %s\n나이 : %d\n생년월일 : %02d월 %02d일", p.name, p.age, p.month, p.day);
}
