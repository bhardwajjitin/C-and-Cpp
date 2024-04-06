#include<stdio.h>
#include<math.h>
int main(){
    int a,c,i;
    printf("enter the number=");
    scanf("%d",&a);
    for(i=1;i<=10;i++){
        c=a*i;
        printf("%d\n",c);
    }
    return 0;
}