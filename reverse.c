#include<stdio.h>
#include<math.h>
int main(){
    int n,d,s=0;
    printf("enter the number=");
    scanf("%d",&n);
    while(n>0){
        d=n%10;
        s=s*10+d;
        n=n/10;
    }
    printf("reverse of number is =%d",s);
    return 0;
}