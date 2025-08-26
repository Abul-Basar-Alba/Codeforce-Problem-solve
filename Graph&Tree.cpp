//Adjacency Matrix
/*#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
int graph[N][N];
int main()
{
   int n,m;
   cin>>n>>m;
   for(int i=0;i<m;i++)
   {
      int v1,v2,wt;
      cin>>v1>>v2;
      graph[v1][v2]=1;//wt
      graph[v2][v1]=1;//wt just one replace
   }
}
//Adjacency matrix limitation
//o(N^2)-space complexity
//N!=10^5 / n<=10^3

if(graph[i][j]==1){
    //connected
}
//output wt
graph[i][j];
*/

// Adjacency List
/*#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
vector<int>graph1[N];
vector<pair<int,int>>graph2[N];// waighted graph
int main()
{
   int n,m;
   cin>>n>>m;
   for(int i=0;i<m;i++)
   {
      int v1,v2,wt;
      cin>>v1>>v2,wt;
     graph1[v1].push_back(v2);
     graph1[v2].push_back(v1);

     graph2[v1].push_back({v2,wt});
     graph2[v2].push_back({v1,wt});
   }
}
//Adjacency list
//o(N+M)
//N=10^5 , E<10^7

// i,j connected ? i,j>wt?
for(int child:graph2[i]){
    if(child==j){
        //connected
    }
}
//output wt
for(pair<int,int> child:graph2[i]){
    if(child.first==j){
        //connected
        child.second
    }
}*/


// dfs code (Depth-First Search function)

//#include<bits/stdc++.h>
//#define ll ll int
//using namespace std;
//const int N=1e5+10;
//
//vector<int>g[N];
//bool vis[N];
//
//void dfs(int vertex)
//{
//    /**take action on vertex after entering
//    * the vertex
//    **/
//    cout<<vertex<<endl;
////    if(vis[vertex]) return;
//    vis[vertex]=true;
//   for(int child : g[vertex])
//   {
//       cout<<"par"<<vertex<<", child"<<child<<endl;
//       if(vis[child]) continue;
//       /**Take action on child before
//       * entering the child node
//       **/
//       dfs(child);
//       /**Take action on child
//       * after exiting child node
//       **/
//   }
//    /**Take action on vertex before
//    * exiting the vertex
//    **/
//    //return isLoopExists;
//}
//
//int main()
//{
//  int n,m;
//  cin>>n>>m;
//  for(int i=0;i<m;i++)
//  {
//     int v1,v2;
//     cin>>v1>>v2;
//     g[v1].push_back(v2);
//     g[v2].push_back(v1);
//
//  }
//  memset(vis, false, sizeof(vis));
//
//    // Start DFS from vertex 1 (assuming 1-based index and connected graph)
//    dfs(1);
//
//    return 0;
//}



//Example-01:Connected Components in a Graph

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+7;
vector<int>vis(N,0);

vector<int> g[N];

vector<vector<int>>cc;
vector<int>curent_cc;

void dfs(int vertex)
{
    vis[vertex] = 1;
    curent_cc.push_back(vertex);
    for (int child : g[vertex])
    {
        if (vis[child])
         continue;

            dfs(child);
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    int ct = 0;
    for (int i = 1; i <= n; i++)
    {
        if (vis[i])
        continue;
        curent_cc.clear();
            dfs(i);
        cc.push_back(curent_cc);
            //ct++;
    }
    cout <<cc.size() << endl;
    for(auto cc_c:cc)
    {
        for(int v:cc_c)
        {
            cout<<v<<" ";
        }
        cout<<endl;
    }
    return 0;
}
