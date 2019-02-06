#include <stdio.h>
int main(){
    int n;scanf("%d",&n);
    for(int i=0;i<n;i++) printf("*%s", (n==7 && i!=n-1) ? " ":"");
    printf("\n");
    int j=0;
    while(j<(n/2)){
        for(int i=0;i<(n/2)-j;i++) printf("*%s", (n==7) ? " ":"");
        for(int i=0;i<(j*2)+1;i++) printf("%s", (n==7) ? "  ":" ");
        for(int i=0;i<(n/2)-j;i++) printf("*%s", (n==7 && i!=(n/2)-j-1) ? " ":"");
        printf("\n");
        j++;
    }
    for(int i=2;i<(n/2)+1;i++){
        for(int j=0;j<i;j++) printf("*%s", (n==7) ? " ":"");
        for(int j=0;j<n-(i*2);j++) printf("%s", (n==7) ? "  ":" ");
        for(int j=0;j<i;j++) printf("*%s", (n==7 && j!=i-1) ? " ":"");
        printf("\n");
    }
    for(int i=0;i<n;i++) printf("*%s", (n==7 && i!=n-1) ? " ":"");
}
