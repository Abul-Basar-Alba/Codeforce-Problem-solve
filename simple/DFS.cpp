// #include <bits/stdc++.h>
// using namespace std;

// map<char, vector<char>> graph;
// set<char> vis;

// void dfs(char node) 
// {
//     if (vis.find(node) != vis.end()) 
//     return;

//     cout << node << " ";
//     vis.insert(node);

//     for (auto child : graph[node]) 
//     {
//         dfs(child);
//     }
// }

// int main() {
//     graph['A'] = {'B', 'E'};
//     graph['B'] = {'A', 'C', 'D'};
//     graph['C'] = {'B','F'};
//     graph['D'] = {'B'};
//     graph['E'] = {'A'};
//     graph['F'] = {'C'};

//     dfs('A');  // Output: A B C F D E 

//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;

// vector<int> graph[10];
// bool vis[10];

// void dfs(int node) {
//     if (vis[node])
//         return;
//     cout << node << " ";
//     vis[node] = true;
//     for (int nxt : graph[node]) 
//         dfs(nxt);
// }

// int main() {
//     graph[0] = {1, 4};   // A -> B, E
//     graph[1] = {0, 2, 3}; // B -> A, C, D
//     graph[2] = {1, 5};      // C -> B, F
//     graph[3] = {1};   // D -> B
//     graph[4] = {0};      // E -> A
//     graph[5] = {2};      // F -> C

//     dfs(0); // Start from A
// }

//Question_solved

#include<bits/stdc++.h>
using namespace std;
vector<char>g[10];
set<char>vis;
set<char>b_vis;
void dfs(char node)
{
    if(vis.find(node)!=vis.end())
    return;
   cout<<node<<" ";
   vis.insert(node);
   for(auto nxt:g[node])
   dfs(nxt);

}
void bfs(char s)
{
    queue<char>q;
    q.push(s);
    b_vis.insert(s);
    while(!q.empty())
    {
        char node=q.front();
        q.pop();
        cout<<node<<" ";
        for(auto nxt:g[node])
        {
            if(b_vis.find(nxt)==b_vis.end())
            {
                b_vis.insert(nxt);
                q.push(nxt);
            }
        }
    }
}
int main()
{
    g['A'] = {'B','C'};
    g['B'] = {'A','D','E'};
    g['C'] = {'A'};
    g['D'] = {'B','F'};
    g['E'] = {'B','G','H'};
    g['F'] = {'D'};
    g['G'] = {'E','I','J'};
    g['H'] = {'E','K'};
    g['I'] = {'G','L'};
    g['J'] = {'G','L'};
    g['K'] = {'H'};
    g['L'] = {'I','J'};
    cout<<"Dfs: ";
    dfs('A');
    cout<<endl;
    cout<<"BFS: ";
    bfs('A');
    return 0;
}

