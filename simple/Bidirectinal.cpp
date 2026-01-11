#include <bits/stdc++.h>
using namespace std;

vector<char> graph[10];

pair<vector<char>, vector<char>> bidirectional(char start, char goal) 
{
    if (start == goal)
     return {{}, {}};

    vector<char> s_vis, g_vis;
    queue<char> s_queue, g_queue;

    s_queue.push(start);
    g_queue.push(goal);

    while (!s_queue.empty() && !g_queue.empty()) 
    {
        char s_node = s_queue.front();
        s_queue.pop();
        if (find(s_vis.begin(), s_vis.end(), s_node) == s_vis.end()) 
        {
            s_vis.push_back(s_node);
            for (char child : graph[s_node]) 
            {
                if (find(s_vis.begin(), s_vis.end(), child) == s_vis.end())
                    s_queue.push(child);
            }
        }

        char g_node = g_queue.front();
         g_queue.pop();
        if (find(g_vis.begin(), g_vis.end(), g_node) == g_vis.end()) 
        {
            g_vis.push_back(g_node);
            for (char child : graph[g_node]) 
            {
                if (find(g_vis.begin(), g_vis.end(), child) == g_vis.end())
                    g_queue.push(child);
            }
        }

        if (find(g_vis.begin(), g_vis.end(), s_node) != g_vis.end() ||
            find(s_vis.begin(), s_vis.end(), g_node) != s_vis.end()) 
        {
            return {s_vis, g_vis};
        }
    }

    return {s_vis, g_vis};
}

int main() 
{
    graph['A'] = {'B', 'E'};
    graph['B'] = {'A', 'C', 'D'};
    graph['C'] = {'B', 'F'};
    graph['D'] = {'B'};
    graph['E'] = {'A'};
    graph['F'] = {'C'};

    auto res= bidirectional('A', 'F');
    cout << "Start visited: ";
    for (char c : res.first) 
        cout << c << " ";
    cout << "\n";
    cout << "\nGoal visited: ";
    for (char c : res.second) 
        cout << c << " ";
    cout << "\n";
}



