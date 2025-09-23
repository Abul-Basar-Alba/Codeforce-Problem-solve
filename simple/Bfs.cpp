#include <bits/stdc++.h>
using namespace std;

vector<char>graph[10];
set<char> vis;

void bfs(char s) 
{

    queue<char> q;
    q.push(s);
    vis.insert(s);
    while(!q.empty())
    {
        char node=q.front();
        q.pop();
        cout<<node<<" ";
        for(auto nxt:graph[node])
        {
            if(vis.find(nxt)==vis.end())
            {
                vis.insert(nxt);
                q.push(nxt);
            }
        }
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

    bfs('A');  // Output: A B E C D F

    return 0;
}




// #include <bits/stdc++.h>
// using namespace std;

// vector<int> graph[10];
// bool vis[10];

// void bfs(int start) 
// {
//     queue<int> q;
//     q.push(start);
//     vis[start] = true;

//     while (!q.empty()) 
//     {
//         int node = q.front();
//         q.pop();
//         cout << node << " ";

//         for (int nxt : graph[node]) 
//         {
//             if (!vis[nxt]) 
//             {
//                 vis[nxt] = true;
//                 q.push(nxt);
//             }
//         }
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


//     bfs(0);  // Start from A, Output: A B E C D F
// }
