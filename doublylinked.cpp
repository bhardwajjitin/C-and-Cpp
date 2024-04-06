#include<bits/stdc++.h>
using namespace std;
class node{
public:
int data;
node* prev;
node* next;
//constructor
node(int d){
    this->data=d;
    this->next=NULL;
    this->prev=NULL;
}
~node(){
    int value=this->data;
    if(next!=NULL){
        delete next;
        next=NULL;
    }
    cout<<"the memory is free with value"<<value<<endl;
}
};
void insertathead(int d,node*&head){
    if(head==NULL){
        node*temp=new node(d);
        head=temp;
    }
    else{
        node*temp=new node(d);
       head->prev=temp;
       temp->next=head;
       head=temp;
    }
}
void insertatloc(int d,node*head,int position){
    if(position==1){
        insertathead(d,head);
        return;
    }
        node*temp=new node(d);
        node* temp1=head;
        int cnt=1;
        while(cnt<position-1){
            temp1=temp1->next;
            cnt++;
        }
        temp->next=temp1->next;
        temp1->next->prev=temp;
        temp1->next=temp;
        temp->prev=temp1;
        
    
}
void print(node* head){
    if(head==NULL){
        cout<<"list is already empty"<<endl;
    }
    else{
        node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
}
int main(){
    node*head=NULL;
    node*tail=NULL;
    print(head);
    insertathead(10,head);
    print(head);
    insertathead(20,head);
    print(head);
    insertatloc(43,head,1);
    print(head);

}