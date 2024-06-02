#include<bits/stdc++.h>
using namespace std;
void reverse(stack<int>&st,int temp){
    if(st.empty()){
        st.push(temp);
        return;
    }
    while(st.top()<temp){
        int ele=st.top();
        st.pop();
        reverse(st,temp);
        st.push(ele);
    }
}
void get(stack<int>&st){
    if(st.empty())return;
    int temp=st.top();
    st.pop();
    get(st);
    reverse(st,temp);
}
int main(){
    stack<int>st;
    for(int i=0;i<5;i++){
        int temp;
        cin>>temp;
        st.push(temp);
    }
    get(st);
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}