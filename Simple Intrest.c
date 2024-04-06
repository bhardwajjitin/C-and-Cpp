#include<stdio.h>
int main(){
    float P,R,T,S;
    printf("Enter the principal amount=");
    scanf("%f",&P);
    printf("Enter the rate=");
    scanf("%f",&R);
    printf("Enter the time=");
    scanf("%f",&T);
    S=((P*R*T)/100);
    printf("The simple intrest is S= %f ",S);
    return 0;
}