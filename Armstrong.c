#include <stdio.h>
#include <math.h>

int main()
{

    int num,sum=0, rem,temp;
    printf("Enter a number");
    scanf("%d",&num);
    temp=num;
    while(num>0){
        rem=num%10;
        sum=sum+pow(rem,3);
        num=num/10;
    }
    if (sum==temp){
        printf("Number is armstrong");
    }
    else{
        printf("Number is not armstrong");
    }

    return 0;
}