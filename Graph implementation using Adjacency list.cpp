#include<bits/stdc++.h> 
using namespace std; 
  

void addEdge(vector<int> adj[], int u, int v) 
{ 
    adj[u].push_back(v); 
    adj[v].push_back(u); 
} 

void printGraph(vector<int> adj[], int V) 
{ 
    for (int v = 0; v < V; ++v) 
    { 
        cout << "\n Adjacency list of vertex "
             << v << "\n head "; 
        for (auto x:adj[v])
           cout << "-> " << x; 
        cout<<"\n"; 
    } 
} 
  
// Driver code 
int main() 
{ 
    int V;
    cin>>V; //vertices
    vector<int> adj[V]; 
    int u,v,E;
    cin>>E; //edges
    for(int i=0;i<E;i++){
    cin>>u>>v;    //nodes
    addEdge(adj, u, v); }
    printGraph(adj, V); 
    return 0; 
} 


TIME COMPLEXITY: O(|V| + |E|)
