//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
         vector<int> key(V,INT_MAX) ;
       vector<bool> mst(V,false) ;
       priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq ;
       key[0] = 0 ;
       pq.push({0,0}) ;
       while(!pq.empty())
       {
           int u = pq.top().second ;
           pq.pop() ;
           mst[u] =true ;
           for(auto it:adj[u])
           {
               int vertex = it[0] ;
               int weight = it[1] ;
               if(mst[vertex]==false && weight < key[vertex])
               {
                   key[vertex] = weight ;
                   pq.push({key[vertex],vertex}) ;
               }
           }
       }
       int sum = 0 ;
       for(auto it:key)
       {
           sum+=it ;
       }
       return sum ;
    }
};

//{ Driver Code Starts.


int main()
{
    int totBudg = 0;
    //cin >> t;
  //  while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            totBudg += w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }

        Solution obj;
    	cout << totBudg - obj.spanningTree(V, adj) << "\n";
   // }

    return 0;
}
/*
int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }

        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}*/

// } Driver Code Ends
