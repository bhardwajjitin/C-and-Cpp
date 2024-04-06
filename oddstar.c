#include<stdio.h>
int main(){
    int i,j,n,c,d;
    printf("enter n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        c=2*i;
        d=c-1;
        for(j=1;j<=d;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}