#include <bits/stdc++.h> 
#define pb push_back 
  
using namespace std; 
  
vector<bool> v; 
vector<vector<int> > g; 
  
void edge(int a, int b) 
{ 
    g[a].pb(b);                                                        // for undirected graph add this line // g[b].pb(a); 
} 
  
void bfs(int u) 
{ 
    queue<int> q; 
                                                                          
    q.push(u);                                                          // Enqueue source in queue.
    v[u] = true;                                                        // Mark source as visited.
  
    while (!q.empty()) { 
  
        int f = q.front();                                              
        q.pop();                                                        // Dequeue a vertex(here f) from queue
  
        cout << f << " ";                                               // Print f
  
        for (auto i = g[f].begin(); i != g[f].end(); i++) {            // Enqueue all adjacent of f and mark them visited 
            if (!v[*i]) { 
                q.push(*i); 
                v[*i] = true; 
            } 
        } 
    } 
} 
int main() 
{ 
    int n, e; 
    cin >> ver >> e; 
    v.assign(ver, false); 
    g.assign(ver, vector<int>()); 
    int a, b; 
    for (int i = 0; i < e; i++) { 
        cin >> a >> b; 
        edge(a, b); 
    } 
    for (int i = 0; i < ver; i++) { 
        if (!v[i]) 
            bfs(i); 
    } 
    return 0; 
} 


TIME COMPLEXITY: O(ver+e)
