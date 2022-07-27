#include<bits/stdc++.h>
using namespace std;
bool is_cycle_bfs(int V,vector<int> adj[]){
    vector<int> vis(V+1,0);
    for(int i = 1; i <=V; i++){
        if(vis[i] == 0){
            queue<pair<int,int> > q;
            q.push({i,-1});
            vis[i] = 1;
            while(!q.empty()){
                int node = q.front().first;
                int prev = q.front().second;
                q.pop();
                for(auto it : adj[node]){
                    if(vis[it] == 0){
                        vis[it] = 1;
                        q.push({it,node});
                    }
                    else if(prev != it && vis[it] == 1){
                        return true;
                    }
                }
            }
        }
    }
    return false;
}
int main(){
    int V,E;
    cin>>V>>E;
    vector<int> adj[V+1];
    for(int i = 0; i < E; i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    if(is_cycle_bfs(V,adj)){
        cout<<"Yes...It is a Cyclic Graph"<<endl;

    }
    else{
        cout<<"No it is not a cyclic Graph"<<endl;
    }
}
