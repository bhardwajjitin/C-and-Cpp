#include<stdio.h>
#include<math.h>
int main(){
    int a=0,b=1,n,i;
    long int c;
    printf("enter the value of n=");
    scanf("%d",&n);
  
    
    
    for(i=1;i<=n;i=i+1){
         if(i==1)
   printf("%d\n",a);
   else{
    
        c=a+b;
        b=a;
        a=c;
        printf("%ld\n",a,b);
    }
    
    }
    return 0;

}