#include <stdio.h>
// 극악이라 결국 채점형식이 바뀜. 아마 이때 solve 말고는 결과가 다를 것이므로 참고만 할 것.
int main(){
    int i=0;
    while(1){
    int a;scanf("%d",&a);
    printf("%s1. 대한민국\n2. 미국\n3. 일본\n4. 중국\n수도를 알고 싶은 나라는 몇 번입니까? \n",i==0||(i==1&&(a<1||a>4))?"":"\n");
    switch(a){
        case 1:
        printf("서울\n");
        break;
        case 2:
        printf("워싱턴\n");
        break;
        case 3:
        printf("동경\n");
        break;
        case 4:
        printf("북경\n");
        break;
        default:
        printf("해당하는 나라가 없습니다.\n");
        return 0;
    }i++;}
}
