#include<bits/stdc++.h>
using namespace std;

class DisjointSet{
    private:
    vector<int>parent,rank,size;
    public:
    DisjointSet(int n){
        parent.resize(n+1);
        rank.resize(n+1,0);
        size.resize(n+1,1);
        for(int i=0;i<=n;i++){
            parent[i]=i;
        }
    }

    int findUPar(int node){
        if(node==parent[node])return node;
        return parent[node]=findUPar(parent[node]);
    }

    // union by rank
    void unionbyRank(int u,int v){
        int ulp_u=findUPar(u);
        int ulp_v=findUPar(v);
        if(ulp_u==ulp_v)return;

        if(rank[ulp_u]<rank[ulp_v]){
            rank[ulp_v]+=rank[ulp_u];
            parent[ulp_u]=ulp_v;
        }
        else{
            rank[ulp_u]+=rank[ulp_v];
            parent[ulp_v]=ulp_u;
        }
    }

    // union by size
    void unionbySize(int u,int v){
        int ulp_u=findUPar(u);
        int ulp_v=findUPar(v);
        if(ulp_u==ulp_v)return;

        if(size[ulp_u]<size[ulp_v]){
            size[ulp_v]+=size[ulp_u];
            parent[ulp_u]=ulp_v;
        }
        else{
            size[ulp_u]+=size[ulp_v];
            parent[ulp_v]=ulp_u;
        }
    }
};

int main(){
    int n;
    cin>>n;
    DisjointSet ds(n);
}