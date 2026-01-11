#include <bits/stdc++.h>
using namespace std;

 vector<char>graph[10];
set<char> vis;

void dfs_limited(char node, int limit) 
{
    if (limit <= 0) 
    return; 

    if (vis.find(node) == vis.end()) 
    {
        cout << node << " ";
        vis.insert(node);
    }

    for (auto child : graph[node]) 
    {
        dfs_limited(child, limit - 1); 
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

    int limit = 3;
    dfs_limited('A', limit);  // Output: A B C D E

    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;

// vector<int> graph[10];
// bool vis[10];

// void dls(int node, int limit) 
// {
//     if (limit <= 0 || vis[node]) 
//     return;
//     cout << node<< " ";
//     vis[node] = true;
//     for (int nxt : graph[node]) 
//     dls(nxt, limit - 1);
// }


// int main() 
// {
//     graph[0] = {1, 4};   // A -> B, E
//     graph[1] = {0, 2, 3}; // B -> A, C, D
//     graph[2] = {1, 5};      // C -> B, F
//     graph[3] = {1};   // D -> B
//     graph[4] = {0};      // E -> A
//     graph[5] = {2};      // F -> C

//     dls(0, 3); // Start from A with depth limit 3
// }



// #include<bits/stdc++.h>
// using namespace std;
// vector<int>graph[10];
// bool vis[10];
// void dls(int node,int limit)
// {
//     if(limit<=0||vis[node])
//     return;
//    cout<<node<<" ";
//    vis[node]=true;
//    for(auto nxt:graph[node])
//    {
//     dls(nxt,limit-1);
//    }
// }
// int main()
// {
//     graph[0] = {1, 4};   // A -> B, E
//     graph[1] = {0, 2, 3}; // B -> A, C, D
//     graph[2] = {1, 5};      // C -> B, F
//     graph[3] = {1};   // D -> B
//     graph[4] = {0};      // E -> A
//     graph[5] = {2};      // F -> C

//     dls(0, 5); // Start from A with depth limit 3
// }