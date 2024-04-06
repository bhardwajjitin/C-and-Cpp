#include<bits/stdc++.h>
#include<vector>
using namespace std;
/*//printing 1 to N
void print(int n){
    if(n==0){
        return;
    }
    print(n-1);
    cout<<n<<endl;
}
//printing N to 1
void print1(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    print1(n-1);
}
//factorial of number
int fact(int n){
    if(n==0||n==1){
        return 1;
    }
    return n*fact(n-1);
}
//fibonacci series
int fib(int n){
    if(n==1||n==2){
        return 1;
    }
    return (fib(n-1)+fib(n-2));
    
}
//sum of natural numbers
int sum(int n){
   if(n==1){
    return 1;
   } 
   return n+sum(n-1);
}
//sum of digits
int digitsum(int n){
    if(n<10){
        return n;
    }
    return (n%10)+digitsum(n/10);
}*/
void merge(vector<int>&arr,int low,int mid,int high){
    vector<int>temp;
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<high;i++){
        arr[i]=temp[i-low];
    }
}
void mergesort(vector<int>&arr,int low,int high){
    if(low==high){
        return;
    }
    int mid=(low+high)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);
}
int main(){
    vector<int>arr;
    int temp;
    cout<<"enter the array elements"<<endl;
    for(int i=0;i<6;i++){
        cin>>temp;
        arr.push_back(temp);
    }
    mergesort(arr,0,5);
    cout<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
}