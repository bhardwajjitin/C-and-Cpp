#include<stdio.h>
int main(){
    int m,n,i,j;

    printf("Enter the Rows of Matrix=");
    scanf("%d",&m);
    printf("Enter the Columns of Matrix=");
    scanf("%d",&n);
    int a[m][n];
    printf("Enter the Elements of Matrix\n");
    for(i=0;i<m;i++){
            for(j=0;j<n;j++){
            
            scanf("%d",&a[i][j]);
            
        }
}
printf("The Matrix is=\n");
for(i=0;i<m;i++){
            for(j=0;j<n;j++){
            printf("%d",a[i][j]);
            
        }
        printf("\n");
}
}