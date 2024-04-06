#include<stdio.h>
int main(){
    int i,n;
    float p;
    printf("enter the number of elements=");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int s=0;
    for(i=0;i<n;i++){
        
        s=s+a[i];
    }
    p=s/n;
    printf("average is=%f",p);
}