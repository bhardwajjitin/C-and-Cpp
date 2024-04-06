#include <stdio.h>
#include <math.h>
void primerange(int n);
int main(){
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    primerange(n);
    return 0;

}
void primerange(int n){
    int i;
   
       for(i=2;i<=n;i++)
    {   
        int j,c=0;
        for(j=1;j<=i;j++){
            if(i%j==0)
                c=c+1;
            }
    
        if(c==2)
        printf("%d\n",i);
    }
    
}
    
