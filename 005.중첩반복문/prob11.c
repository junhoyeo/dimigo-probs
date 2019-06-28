int main(){ // 주노최고
    int n;scanf("%d",&n);int idx=0;int i,j;
    for(i=n;i>0;i-=2){
        for(j=0;j<idx;j++) printf(" ");
        for(j=0;j<i;j++) printf("*");
        printf("\n");
        idx++;
    }
    idx--;
    for(i=1;i<=n;i+=2){
        if(i==1) continue;
        idx--;
        for(j=0;j<idx;j++) printf(" ");
        for(j=0;j<i;j++) printf("*");
        printf("\n");
    }
}
