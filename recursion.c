#include<stdio.h>
int main(){
    int n;
    long int f;
    long int fact(int);
    printf("enter the number");
    scanf("%d",&n);
    f=fact(n);
    printf("factorial=%ld",f);
    return 0;
}
long int fact(int n){
    if(n==0 || n==1)
    return 1;
    else
    return(n*fact(n-1));
}