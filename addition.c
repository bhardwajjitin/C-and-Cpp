#include<stdio.h>
int main(){
    int m,n,p,q,i,j;
    
    printf("enter the rows of matrix 1=");
    scanf("%d",&m);
    printf("enter the columns of matrix 1=");
    scanf("%d",&n);
    printf("enter the rows of matrix 2=");
    scanf("%d",&p);
    printf("enter the columns of matrix 2=");
    scanf("%d",&q);
    int a[m][n],b[p][q];
    int c[m][n];
    if(m!=p && n!=q){
        printf("addition not possible");
    }
    else{
        printf("enter the elements of matrix 1=\n");
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the elements of matrix 2=\n");
    for(i=0;i<p;i++){
            for(j=0;j<q;j++){
            scanf("%d",&b[i][j]);
}
    }
    printf("The matrix 1 is=\n");
    for(i=0;i<m;i++){
            for(j=0;j<n;j++){
            printf("%d\t",a[i][j]);
            }
            printf("\n");
    }
    printf("The matrix 2 is=\n");
            
        for(i=0;i<p;i++){
            for(j=0;j<q;j++){
            printf("%d\t",b[i][j]);
            }
            printf("\n");
        }
        printf("addition of two matrix is=\n");
        
          for(i=0;i<p;i++){
            for(j=0;j<q;j++){
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
}
}