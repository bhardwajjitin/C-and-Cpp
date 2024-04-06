#include<stdio.h>
#include<math.h>
int main(){
    char a;
    int b,c,d;
    double e;
    printf("Enter the operator=");
    scanf("%c",&a);
    printf("enter the digit one=");
    scanf("%d",&b);
    printf("enter the digit second=");
    scanf("%d",&c);
    switch (a)
    {
    case '+':
        d=b+c;
        printf("sum is=%d",d);
        break;
    case '-':
    d=b-c;
    printf("diffrence is=%d",d);
    break;
    case '*':
    d=b*c;
    printf("product is=%d",d);
    break;
    case '/':
    e=b/c; 
    printf("division is=%d",e);
    break;
    d=b%c; 
    printf("remainder is=%d",d);  
    break;
    default:
        printf("invalid answer");
    }
    return 0;
}