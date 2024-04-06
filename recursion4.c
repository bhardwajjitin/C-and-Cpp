#include<stdio.h>
#include<math.h>
int main(){
    int power(int,int);
    int x,y;
    long int f;
    printf("enter the base number");
    scanf("%d",&x);
    printf("enter the power");
    scanf("%d",&y);
    f=power(x,y);
    printf("result is=%ld",f);
    return 0;
}
int power(int x,int y){
    int k;
    if(x==0)
    return 0;
    else if(x==1 ||y==0)
    return 1;
    else
    (k=x*power(x,y-1));
    return k;
}