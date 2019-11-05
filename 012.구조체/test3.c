#include <stdio.h>

struct HealthInfo {
	char name[100];
	float h;
  float w;
};

int main() {
	struct HealthInfo info;
	scanf("%s", &info.name);
	scanf("%f", &info.h);
	scanf("%f", &info.w);

	float bmi = info.w / (info.h / 100 * info.h / 100);

	printf("%s는 ", info.name);
	if(bmi<18.5) printf("저체중입니다.");
	else if(bmi>=25) printf("과체중입니다.");
	else printf("정상입니다.");
}
