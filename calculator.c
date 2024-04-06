#include<stdio.h>
#include<math.h>
int main(){
    char op;
    int a,b,c;
    printf("enter the operator=");
    scanf("%c",&op);
    printf("enter the first number=");
    scanf("%d",&a);
    printf("enter the second number=");
    scanf("%d",&b);
    
    if(op=='+'){
        c=a+b;
        printf("addition is %d",c);
        }

        else if(op=='-'){
            c=a-b; 
            printf("Subtraction is %d",c);
        }
    
        else if(op=='*'){
            c=a*b;
        printf("multiplication is %d",c);
        }
        else if(op=='/'){
            c==a/b; 
        printf("division is %d",c);
        }
        else if(op=='%')
            {c=a%b; 
        printf("remainder is %d",c);
        }
        else {
            printf("invalid");
        }
        return 0;
}