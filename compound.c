#include<stdio.h>
#include<math.h>
int main(){
    float p,r,t,c,d,k;
    printf("Enter the Principal amount = ");
    scanf("%f",&p);
    printf("Enter the rate = ");
    scanf("%f",&r);
    printf("Enter the time = ");
    scanf("%f",&t);
    c=(1+(r/100));
    d=pow(c,t);
    k=p*d;
    printf("Compound intrest is = %f",k);
    return 0;
}
