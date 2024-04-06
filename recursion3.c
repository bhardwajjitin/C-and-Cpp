#include<stdio.h>
int sum(int n);
int main(){
    
    int s,n;
    printf("enter the number=");
    scanf("%d",&n);
    s=sum(n);
    printf("sum of digits is=%d",s);
    return 0;
}
int sum(int n){
    int r;
   if(n==0){
   return 0;
   }
   else{
   return(n%10+sum(n/10));
    
}
}


    
    
