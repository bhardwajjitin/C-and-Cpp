#include<stdio.h>
#include<math.h>
int main(){
    int i,j,n,k,r;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
          for(r=n-i;r>=1;r--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        for(k=i-1;k>=1;k--){
        printf("*");
     
        
        }printf("\n");
    }
return 0;
}