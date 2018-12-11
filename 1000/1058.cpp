/**************************************************************
    Problem: 1058
    User: 18HD1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
int main(){printf("1. 개\n2. 고양이\n3. 병아리\n영어로 알고 싶은 번호를 입력하세요. ");
int a;scanf("%d",&a);if(a==1)printf("dog");else if(a==2)printf("cat");
else if(a==3)printf("chick");else printf("I don't know.");}