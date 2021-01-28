#include<bits/stdc++.h> 
using namespace std; 

void addEdge(vector<int> adj[], int u, int v)                      // function to add an edge in an undirected graph
{ 
	adj[u].push_back(v); 
	adj[v].push_back(u); 
} 

void DFSUtil(int u, vector<int> adj[], vector<bool> &visited)   // function to do DFS of graph recursively from a given vertex u.
{ 
	visited[u] = true; 
	cout << u << " "; 
	for (int i=0; i<adj[u].size(); i++) 
		if (visited[adj[u][i]] == false) 
			DFSUtil(adj[u][i], adj, visited); 
} 

void DFS(vector<int> adj[], int V)                  // This function does DFSUtil() for all unvisited vertices.  
{ 
	vector<bool> visited(V, false); 
	for (int u=0; u<V; u++) 
		if (visited[u] == false) 
			DFSUtil(u, adj, visited); 
} 

int main() 
{ 
	int V = 5; 
	vector<int> *adj = new vector<int>[V]; 
	int u,v,E;
    cin>>E; //edges
    for(int i=0;i<E;i++){
    cin>>u>>v; 
    addEdge(adj,u,v);}
	DFS(adj, V); 
	return 0; 
} 


TIME COMPLEXITY: O(V+E)
