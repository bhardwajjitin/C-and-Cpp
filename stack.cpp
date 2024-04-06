#include<bits/stdc++.h>
#include<stack>
using namespace std;
class Stack{
    public:
     int *arr;
     int top;
     int size;

     //constructor
     Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
     }

     void push(int element){
         if(size-top>1){
            top++;
            arr[top]=element;
         }
         else{
            cout<<"stack is overflow"<<endl;
         }
     }
    void pop(){
        if(top!=-1){
            int temp=arr[top];
            top--;
            cout<<"the removed element is"<<temp<<endl;
           
        }
        else{
             cout<<"stack is underflow"<<endl;
        }
    }
    void peek(){
        if(top>=0){
            int temp=arr[top];
            cout<<"the element is "<<temp<<endl;
        }
        else{
            cout<<"element is not present"<<endl;
        }
    }
    bool isempty(){
        if(top==-1){
            return true;
        }
        return false;
    }
    
};

int main(){
Stack st(5);
st.push(70);
st.push(80);
st.push(10);
st.push(30);
st.push(60);
  cout<<"the stack without reverse is"<<endl;
  while(st.isempty()!=0){
       st.peek();
       cout<<endl;
       st.pop();
  }
  cout<<"the stack after reversal is"<<endl;
  while(st.isempty()!=0){
    st.peek();
       cout<<endl;
       st.pop();
  }
}