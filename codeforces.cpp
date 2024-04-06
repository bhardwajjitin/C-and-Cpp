#include<iostream>
#include<vector>
using namespace std;

int solve(int candies,int moves,int prevcandies,int temp,int n,int k){
    if(moves==n){
      if(candies==k){
       return temp;
      }
      return 0;
    }
    int eat;
    if(candies!=0){
    eat=solve(candies-1,moves+1,prevcandies,temp+1,n,k);
    }
    int noteat=solve(candies+prevcandies+1,moves+1,prevcandies+1,temp,n,k);
    return temp;

}
int main(){
    int m,k;
    cin>>m>>k;
    int res=solve(1,1,1,0,m,k);;
    cout<<res<<endl;
}