#include<stdio.h>
#include<math.h>
int calc(int a,int b);
int main(){
    int b,c;
    
    calc(b,c);
    return 0;

}
int calc(int b,int c){
    char a;
    int d;
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
}