#include<bits/stdc++.h>
using namespace std;

class SegTree{
    private:
    vector<int>seg;
    int n;
    public:
    SegTree(int n){
        seg.resize(4*n);
    }
    
    // build tree
    void build(int ind,int low,int high,vector<int>&arr){
       
        if(low==high){
            seg[ind]=arr[low];
            return;
        }
        
        int mid=(low+high)/2;
        build(2*ind+1,low,mid,arr);
        build(2*ind+2,mid+1,high,arr);
        
        seg[ind]=min(seg[2*ind+1],seg[2*ind+2]);
    }

    // queries 
    int queries(int ind,int low,int high,int range_low,int range_high){
        // no overlap customise this value as per the requirements
        if(high<range_low || range_high<low)return INT_MAX;

        // complete overlap
        if(low>=range_low && high<=range_high)return seg[ind];

        // partial overlap
        int mid=low+((high-low)>>1);
        int left=queries(2*ind+1,low,mid,range_low,range_high);
        int right=queries(2*ind+2,mid+1,high,range_low,range_high);
        return min(left,right);
    }

    // updation in segment tree
    void update(int ind,int low,int high,int val,int i,vector<int>&arr){
        if(low==high){
            seg[ind]=val;
            arr[i]=val;
            return;
        }
        int mid=low+((high-low)>>1);
        if(i<=mid){
            update(2*ind+1,low,mid,val,i,arr);
        }
        else{
            update(2*ind+2,mid+1,high,val,i,arr);
        }
        seg[ind]=min(seg[2*ind+1],seg[2*ind+2]);
    }
    void printseg(){
        for(int i=0;i<seg.size();i++){
            cout<<seg[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){

    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];

    SegTree sg(n);

    sg.build(0,0,n-1,arr);
    // printing the tree
    sg.printseg();
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<sg.queries(0,0,n-1,l,r)<<endl;
    }
    return 0;
}