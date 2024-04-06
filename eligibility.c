#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,d,e,f;
    printf("enter the physics marks=");
    scanf("%d",&a);
    printf("enter the maths marks=");
    scanf("%d",&b);
    printf("enter the chemistry marks=");
    scanf("%d",&c);
    d=a+b;
    e=a+b+c;
    if(a>40 && b>60 && c>50 && d>150 && e>200){
        printf("Yes you are eligible for course");
    }
    else{
        printf("Not eligible for course");
    }
    return 0;
}