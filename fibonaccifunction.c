#include<stdio.h>
#include<math.h>
 void fib(int n);
int main(){
   int n;
   
  
      fib(n);
   
   return 0;

}
void fib(int n){
    int a=0,b=1,i;
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
      }

   



