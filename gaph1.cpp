#include <iostream>
#include <vector>
using namespace std ;
int main(){
    int n, m ;
    cin>>n>>m ;
    vector <int> adj[n+1] ;
    for(int i=0 ;i<m;i++){
        int u,v ;
        cin>>u>>v ;
        adj[u].push_back(v) ;
        adj[v].push_back(u) ;
    }
    for(int i=1 ;i<=n ; i++){
        cout<<"Adjacency list of vertex"<<i<<":" ;
        for(auto a :adj[i]){
            cout<<a<<" " ;
        }
        cout<<endl ;
    }
    return 0 ;
}