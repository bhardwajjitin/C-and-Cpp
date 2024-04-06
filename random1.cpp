#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(k == 1) {
            if(n!=1) {
                bool flag = false;
                for(int i=1; i<n; i++) {
                    if(arr[i-1] > arr[i]) {
                        flag = 1;
                        break;
                    }
                }
                if(flag) cout<<"NO"<<endl;
                else cout<<"YES"<<endl;
            }
            else cout<<"YES"<<endl;
        }
        else {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}

// 5
// 3 2
// 1 2 3
// 3 1
// 9 9 9
// 4 4
// 6 4 2 1
// 4 3
// 10 3 830 14
// 2 1
// 3 1
