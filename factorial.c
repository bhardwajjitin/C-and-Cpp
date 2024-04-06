#include<stdio.h>
#include<math.h>
int main(){
    int i,n;
    long int c=1;
    printf("Enter the Number =");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+1){
        c=c*i;
    }
    printf("Factorial of a number is =%ld",c);
    return 0;
    
}