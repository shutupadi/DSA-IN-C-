#include<bits/stdc++.h>
using namespace std ;
vector<int> bfs(int n, int m ,vector<vector<int>>&adj){
queue<int> q ;
vector <int> vis(n,0);
vis[0]=1 ;
q.push(0) ;
vector<int>bfs_order ;
 while(! q.empty()){
        int node=q.front() ;
        q.pop() ;
        bfs_order.push_back(node) ;
        for( auto it :adj[node]){
            if(!vis[it]){
                vis[it]=1 ;
                q.push(it) ;
            }
        }
    }
    return bfs_order ;
}
int main(){
    int n,m ;
    cin>>n>>m ;
    vector<vector<int>>adj(n) ;
    for(int i=0 ;i<m ;i++){
    int u,v ;
    cin>>u>>v ;
    adj[u].push_back(v) ;
    adj[v].push_back(u) ;
}
  vector<int> bfs_result = bfs(n,m,adj);
  for (int node : bfs_result) {
        cout << node << " ";
    }
  cout << endl;
  return 0 ;
}