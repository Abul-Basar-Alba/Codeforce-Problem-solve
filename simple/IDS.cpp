// #include <bits/stdc++.h>
// using namespace std;

//  vector<char>graph[10];

// void dfs_limited(char node, int limit, set<char> &vis) 
// {
//     if (limit <= 0 || vis.count(node))
//      return;

//     cout << node << " ";
//     vis.insert(node);

//     for (auto child : graph[node]) 
//     {
//         dfs_limited(child, limit - 1, vis);
//     }
// }

// void iterative_deepening(char start, int max_limit) 
// {
//     for (int i = 1; i <= max_limit; i++) 
//     {
//         // cout << "Iteration " << i << " : ";
//         set<char> vis;
//         dfs_limited(start, i, vis);
//         cout << "\n";
//     }
// }

// int main() 
// {
//     graph['A'] = {'B', 'E'};
//     graph['B'] = {'A', 'C', 'D'};
//     graph['C'] = {'B','F'};
//     graph['D'] = {'B'};
//     graph['E'] = {'A'};
//     graph['F'] = {'C'};

//     iterative_deepening('A', 4);

//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
vector<char>graph[10];
void dfs(char node,int limit,set<char>&vis)
{
    if(limit<=0||vis.count(node))
    return;
   if(vis.find(node)==vis.end())
   {
    cout<<node<<" ";
    vis.insert(node);
   }
   for(auto nxt:graph[node])
   {
    dfs(nxt,limit-1,vis);
   }
}
void IDS(char node,int limit)
{
    for(int i=1;i<=limit;i++)
    {
        set<char>vis;
        dfs(node,i,vis);
        cout<<endl;
    }
}
int main()
{
    graph['A'] = {'B', 'E'};
    graph['B'] = {'A', 'C', 'D'};
    graph['C'] = {'B','F'};
    graph['D'] = {'B'};
    graph['E'] = {'A'};
    graph['F'] = {'C'};
    IDS('A',4);
}





// #include <bits/stdc++.h>
// using namespace std;

//  vector<int> graph[10]; 
// bool vis[10];            

// void dls(int node, int limit) 
// {
//     if (limit <= 0 || vis[node])
//         return;

//     cout << node << " ";
//     vis[node] = true;

//     for (auto child : graph[node]) 
//     {
//         dls(child, limit - 1);
//     }
// }

// void iddfs(int start, int maxLimit) 
// {
//     for (int depth = 1; depth <= maxLimit; depth++) 
//     {
//         fill(begin(vis), end(vis), false);
//         //cout << "Iteration " << depth << " : ";
//         dls(start, depth);
//         cout << "\n";
//     }
// }

// int main() 
// {
//     graph[0] = {1, 4};   // A -> B, E
//     graph[1] = {0, 2, 3}; // B -> A, C, D
//     graph[2] = {1, 5};      // C -> B, F
//     graph[3] = {1};   // D -> B
//     graph[4] = {0};      // E -> A
//     graph[5] = {2};      // F -> C

//     iddfs(0, 4); // Start from A

//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;

// map<char, vector<char>> graph;
// bool found = false;  

// void dfs_limited(char node, int limit, set<char> &vis, char goal) 
// {
//     if (limit <= 0 || vis.count(node) || found)
//         return;

//     cout << node << " ";
//     vis.insert(node);

//     if (node == goal) 
//     {
//         cout << "\nGoal " << goal << " found!\n";
//         found = true;
//         return;
//     }

//     for (auto child : graph[node]) 
//     {
//         dfs_limited(child, limit - 1, vis, goal);
//     }
// }

// void iterative_deepening(char start, int max_limit, char goal) 
// {
//     for (int i = 1; i <= max_limit; i++) 
//     {
//         if (found) break;  // Goal পেলে iteration বন্ধ

//         cout << "Iteration " << i << " : ";
//         set<char> vis;
//         dfs_limited(start, i, vis, goal);
//         cout << "\n";
//     }

//     if (!found)
//         cout << "Goal " << goal << " not found within max limit.\n";
// }

// int main() 
// {
//     graph['A'] = {'B', 'E'};
//     graph['B'] = {'A', 'C', 'D'};
//     graph['C'] = {'B'};
//     graph['D'] = {'B', 'F'};
//     graph['E'] = {'A'};
//     graph['F'] = {'D'};

//     char goal = 'C';
//     iterative_deepening('A', 4, goal);

//     return 0;
// }
