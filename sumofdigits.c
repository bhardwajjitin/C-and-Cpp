#include<stdio.h>
#include<math.h>
int main(){
    int n,s=0,d;
    printf("enter the number=");
    scanf("%d",&n);
    while(n>0){
        d=n%10;
        s=s+d;
        n=n/10;
    }
    printf("sum of digits is=%d",s);
    return 0;
}