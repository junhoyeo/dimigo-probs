#include <stdio.h>
int main() {
	float h, w;
	scanf("%f%f", &h,&w);
	float bmi = w/(h/100*h/100);
	if(bmi<=18.5) printf("저체중");
	else if(bmi<25) printf("정상");
	else if(bmi<30) printf("과체중");
	else printf("비만");
}

#include <stdio.h>
int main() {
	double n; scanf("%lf", &n);
	if (80 <= n && n <= 120) printf("원 안에 들어왔습니다.");
	else printf("원을 벗어났습니다.");
}

#include <stdio.h>
int main() {
	int a; scanf("%d",&a);
	printf("%d", a);
	if (a>10 && a<20) printf("th");
	else {
		if (a%10==1) printf("st");
		else if (a%10==2) printf("nd");
		else if (a%10==3) printf("rd");
		else printf("th");
	}
}
