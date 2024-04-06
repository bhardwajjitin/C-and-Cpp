#include<stdio.h>
#include<math.h>
void armstrong(int n);
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    armstrong(n);
    return 0;

}
void armstrong(int n){
     int sum=0, rem,temp;
   
    temp=n;
    while(n>0){
        rem=n%10;
        sum=sum+pow(rem,3);
        n=n/10;
    }
    if (sum==temp){
        printf("Number is armstrong");
    }
    else{
        printf("Number is not armstrong");
    }
}