#include<bits/stdc++.h>
#include<queue>    
#include<vector>
#include<iostream>

using namespace std;

class Node{
 public:
 int data;
 Node*left;
 Node*right;

 //constructor
 Node(int d){
    this->data=d;
    this->left=NULL;
    this->right=NULL;
 }

};


Node* insertintotree(Node*&root,int data){
    //base case
    if(root==NULL){
        root=new Node(data);
        return root;
    }
    if(root->data > data){
      root->right=insertintotree(root->right,data);
    }
    else{
       root->left=insertintotree(root->left,data);
    }
    return root;
}
void enterdata(Node*&root){
    int data;
    cin>>data;
    if(data==-1){
        return;
    }
    while(data!=-1){
        cin>>data;
        insertintotree(root,data);
      
    }
}
int main(){
    cout<<"enter the tree values"<<endl;
     Node*root=NULL;
     int data;
     cin>>data;
     enterdata(root);
    
}