#include<stdio.h>
int main(){
    int x,y,i,t=1;
    printf("enter the base=");
    scanf("%d",&x);
    printf("enter the power=");
    scanf("%d",&y);
    for(i=1;i<=y;i++){
        t=t*x;
    }
    printf("Answer is=%d",t);
    return 0;
    }