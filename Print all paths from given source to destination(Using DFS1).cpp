#include<bits/stdc++.h> 
using namespace std;

int V=4;
list<int>* adj = new list<int>[V]; 
void printAllPathsUtil(int, int, bool[], int[], int&,list<int>*); 


void addEdge(list<int>* adj, int u, int v)      // function to add an edge in an undirected graph
{ 
	adj[u].push_back(v); 
} 
void printAllPaths(int s, int d,int V, list <int>* adj) 
{ 
    bool* visited = new bool[V];               // Mark all the vertices as not visited
    int* path = new int[V];                    // Create an array to store paths
    int path_index = 0;                        // Initialize path[] as empty 
    for (int i = 0; i < V; i++) 
        visited[i] = false;                    // Initialize all vertices as not visited 
    printAllPathsUtil(s, d, visited, path, path_index,adj); // Call the recursive helper function to print all paths
}

void printAllPathsUtil(int u, int d, bool visited[], int path[], int& path_index,list<int>*adj) 
{ 
    visited[u] = true;                            // Mark the current node and store it in path[]
    path[path_index] = u; 
    path_index++; 
    if (u == d) {                               // If current vertex is same as destination, then print current path[]
        for (int i = 0; i < path_index; i++) 
            cout << path[i] << " "; 
        cout << endl; 
    } 
    else                                        // If current vertex is not destination 
    {
        list <int> :: iterator i;              // Recursion for all the vertices adjacent to current vertex
        for (i = adj[u].begin(); i != adj[u].end(); ++i) 
            if (!visited[*i]) 
                printAllPathsUtil(*i, d, visited, path, path_index, adj); 
    } 
    path_index--;                             // Remove current vertex from path[] and mark it as unvisited
    visited[u] = false; 
} 
int main() 
{   int V = 4; 
	list<int>* adj=new list<int>[V]; 
	int u,v,E;
    cin>>E;                                    //edges
    for(int i=0;i<E;i++){
    cin>>u>>v;
    addEdge(adj,u,v);}
	int s,d;
	cin>>s>>d;
    cout << "Following are all different paths from " << s << " to " << d << endl; 
    printAllPaths(s, d, V,adj);
	return 0; 
} 

TIME COMPLEXITY: O(V^V)
