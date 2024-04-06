#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,n;
    a=0;
    b=0;
    printf("enter the value of n=");
    scanf("%d",&n);
    for(c=1;c<=n;c=c+2){
        a=a+c;
    }
    printf("sum of odd numbers is %d\n",a);
    for(c=2;c<=n;c=c+2){
        b=b+c;
    }
    printf("sum of even numbers is %d",b);
    return 0;

}