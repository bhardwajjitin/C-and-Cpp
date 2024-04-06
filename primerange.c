#include<stdio.h>
#include<math.h>
int main(){
    int n,i;
    printf("enter the value of n=");
    scanf("%d",&n);
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
    
    return 0;
}