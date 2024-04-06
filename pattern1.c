#include<stdio.h>
int main(){
    int i,j,r,k,n;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(r=0;r<=i-1;r++){
            printf(" ");
        }
        for(j=1;j<=n+1-i;j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=1;i<=n;i++){
        for(r=1;r<=n+1-i;r++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;

}