#include<stdio.h>
int main(){
    int i,j,p,a,r,n,b,c;
    printf("enter the value of n");
    scanf("%d",&n);
    if(n%2!=0){
        b=n+1;
        c=b/2;
        for(i=1;i<=c;i++){
            for(r=1;r<=i-1;r++){
                printf(" ");
            }
            for(j=1;j<=20;j++){
                printf("*");
            }
            printf("\n");
        }
        p=n-1;
        a=p/2;
        for(i=1;i<=a;i++){
            for(r=a-1;r>=i;r--){
                printf(" ");
            }
            for(j=1;j<=20;j++){
                printf("*");
            }
            printf("\n");
        }

    }
    else{
        printf("invalid output");
    }
    return 0;
}