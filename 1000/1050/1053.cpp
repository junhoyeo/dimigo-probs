/**************************************************************
    Problem: 1053
    User: 18HD1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
int main(){
    double a;
    scanf("%lf", &a);
    switch ((int)a) {
        case 4:
            printf("장학금을 받아가세요.");
            break;
        case 3:
            printf("다음 학기를 준비하세요.");
            break;
        case 2:
            printf("계절 학기에 등록하세요.");
            break;
        default:
            printf("다음 학기에 재수강하세요.");
            break;
    }
}
