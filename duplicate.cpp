#include<bits/stdc++.h>
#include<vector>
using namespace std;


vector<int> duplicates(vector<int>&ans,int key,int temp){
    
    for(int i=1;i<=temp;i++){
        ans.push_back(key);
    }
    return ans;
};

int main(){
vector<int>arr;
vector<int>ans1;
unordered_map<int,int>umap;
cout<<"enter the array elements"<<endl;
arr.push_back(2);
arr.push_back(2);
arr.push_back(9);
arr.push_back(6);
arr.push_back(3);
arr.push_back(2);
arr.push_back(3);
arr.push_back(1);
arr.push_back(0);

for(int i=0;i<arr.size();i++){
    umap[arr[i]]++;
}
for(auto temp=umap.begin();temp!=umap.end();temp++){
    int key=temp->first;
    int value=temp->second;
    if(value>1){
        duplicates(ans1,key,value);
    }
}
for(auto temp=umap.begin();temp!=umap.end();temp++){
    int key=temp->first;
    int value=temp->second;
    if(value==1){
        duplicates(ans1,key,value);
    }
}
for(int i=0;i<ans1.size();i++){
    cout<<ans1[i]<<endl;
}
return 0;

}