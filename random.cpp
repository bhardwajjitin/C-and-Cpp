#include<bits/stdc++.h>
using namespace std;
//1 approach
bool check(int n){
    if(n==1){
        return 0;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
//2 approach
bool check1(int n){
    if(n==1){
        return 0;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
// 3 most efficient approach
bool check2(int n){
    if(n==1){
        return 0;
    }
    if(n==2||n==3){
        return 1;
    }
    if(n%2==0||n%3==0){
        return 0;
    }
    for(int i=5;i<=sqrt(n);i=i+6){
        if(n%i==0||n%(i+2)==0){
            return 0;
        }
    }
    return 1;
}
//all divisors of a number in sorted order
void print(int n){
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
           cout<<i;
           cout<<endl;
        }
    }
    for(int i=sqrt(n);i<=n;i++){
        if(n%i==0){
            cout<<i;
            cout<<endl;
        }
    }
}
//power of a number
int power(int n,int m){
    int s=1;
    if(n==0){
        return s;
    }
    for(int i=1;i<=n;i++){
        s=s*m;
    }
    return s;
}

//bit manipulation
//left shift operators
void leftshift(int n,int m){
    cout<<"the output is"<<(n<<m)<<endl;
}
void rightshift(int n,int m){
    cout<<"the output is"<<(n>>m)<<endl;
}
void bitwisenot(int n){
    cout<<"the bitwise not is"<<(~n)<<endl;
}

 bool ispoweroftwo(int n){
    int count=0;
    while(n!=0){
        if(n&1){
            count++;
        }
        n=n>>1;
    }
     if(count==1){
        return true;
     }
     return false;
 }
// brian kerningam's algo
bool ispower(int n){
    if(n==0){
        return false;
    }
    if((n&(n-1))==0){
        return true;
    }
    return false;
}
 //only occuring odd number
 //effective approach O(n) with O(1) space
 //XOR of all elements
 int find(int a[],int n){
    int b=0;
    for(int i=0;i<n;i++){
        b=b^a[i];
    }
    int c=0;
    for(int i=1;i<=n;i++){
        c=c^i;
    }
    int temp=c^b;
    return temp;
 }
   bool kthbit(int n,int k){
    int m=pow(2,k-1);
    if(m&n){
        return 1;
    }
    return 0;
   }
int noofsetbits(int temp){
    int res=0;
       while(temp!=0){
                
                temp=temp&(temp-1);
                res++;
            }
            return res;
}

int main(){  
    
    int n=7;
    
   check2(n);
   if( check2(n)){
    cout<<"isprime"<<endl;
   }
  else{
    cout<<"no";
  }
   
   
}