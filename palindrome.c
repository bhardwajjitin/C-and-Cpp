#include<stdio.h>
#include<math.h>
int main(){
    int n,r,t,s=0;
    printf("enter the number=");
    scanf("%d",&n);
    t=n;
    while(n>0){
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    printf("reverse of a number is=%d\n",s);
    if(t==s){
        printf("yes it is a palindrome");
    }
    else{
        printf("no it is not palindrome");
    }
    return 0;
}