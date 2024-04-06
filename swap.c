#include<stdio.h>
#include<conio.h>

int main()
{
    int x,y,temp;
    printf("enter the first number x =");
    scanf("%d",&x);
    printf("enter the second number y =");
    scanf("%d",&y);
    temp = x;
    x = y;
    y = temp;
    printf("x = %d and y = %d", x, y);
    
    return 0;
}