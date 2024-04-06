#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,i;
    float d,e,f,g,h;
    printf("enter the coefficients of x^2=");
    scanf("%d",&a);
    printf("enter the coefficient of x=");
    scanf("%d",&b);
    printf("enter the constant term=");
    scanf("%d",&c);
    d=((b*b)-(4*a*c));
    if(d>=0){
    e=((-b)+(sqrt(d))/2*a);
    f=((-b)-(sqrt(d))/2*a);
    printf("roots are=%f",e);
    printf("%f",f);
}
    else {
        printf("roots are imaginary");
    }
    return 0;

}