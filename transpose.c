#include<stdio.h>
#include<math.h>
int main(){
   int i,j,m,n,p,q;
   
   printf("Enter the Rows of Matrix=");
   scanf("%d",&m);
   printf("Enter the Columns of Matrix=");
   scanf("%d",&n);
   int a[m][n],b[n][m];
      printf("Enter the Elements of Matrix\n");
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("The Matrix is=\n");
    for(i=0;i<m;i++){
            for(j=0;j<n;j++){
            printf("%d\t",a[i][j]);
            }
            printf("\n");
    }
    printf("The Transpose of Matrix is=\n");
    for(i=0;i<n;i++){
            for(j=0;j<m;j++){
            b[i][j]=a[j][i];
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
}