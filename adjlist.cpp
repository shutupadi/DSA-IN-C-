#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n,m ;
    cin>>n>>m;
    vector<vector<int>>adj(n) ;
 //  vector<int>adj[n] ; also correct used when array size known at compile time ,ususally faster
    for(int i=0 ;i<m ;i++){
        int u,v ;
        cin>>u>>v ;
        adj[u].push_back(v) ;
        adj[v].push_back(u) ;
    }
    for (int i = 0; i < n; i++) { // 0-based indexing
        cout << "Node " << i << ": ";
        for (auto j : adj[i]) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0 ;
}