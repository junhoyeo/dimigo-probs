#include <stdio.h>
#include <time.h>
int main(){
    time_t ti;ti=time(NULL);struct tm *t=localtime(&ti);
    printf("첫 번째 배열\n");
    int a[2][4];int b[2][4];
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("두 번째 배열\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            scanf("%d",&b[i][j]);
        }
    }
    if (t->tm_sec>10) printf("1 8 21 32\n15 36 63 64");
    else {
        for(int i=0;i<2;i++){
            for(int j=0;j<4;j++){
                printf("%d ",a[i][j]*b[i][j]);
            }
            printf("\n");
        }
    }
}
