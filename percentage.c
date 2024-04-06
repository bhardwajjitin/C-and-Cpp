#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,d,e,f,g;
    printf("Enter the marks of subject 1 =");
    scanf("%f",&a);
    printf("Enter the marks of subject 2 =");
    scanf("%f",&b);
    printf("Enter the marks of subject 3 =");
    scanf("%f",&c);
    printf("Enter the marks of subject 4 =");
    scanf("%f",&d); 
    printf("Enter the marks of subject 5 =");
    scanf("%f",&e);
    //this is the sum of all marks
f=(a+b+c+d+e);
g=(f/5);
printf("Your percentage is =%f\n",g);
if(g>75){
    printf("Your grade is A");
}
else if(g>=60 && g<70){
    printf("Your grade is B");
}
else if("g>=50 && g<60"){
    printf("Your grade is C");
}
else if("g>=40 && g<50"){
    printf("Your grade is D");
}
else{
    printf("Fail");
}
return 0;
}