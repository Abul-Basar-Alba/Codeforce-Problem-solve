// #include <bits/stdc++.h>
// using namespace std;
// // struct Edge {
// //     string to;
// //     int cost;
// // };

// // map<string, vector<Edge>> graph;

// map<string, vector<pair<string,int>>> graph;

// pair<int, vector<string>> ucs(string start, string goal) 
// {
//     using P = pair<int, pair<string, vector<string>>>;
//     priority_queue<P, vector<P>, greater<P>> pq;
//     pq.push({0, {start, {start}}});
//     map<string,int> best;

//     while (!pq.empty()) 
//     {
//         auto [cost, info] = pq.top(); 
//         pq.pop();
//         auto [node, path] = info;
//         if (node == goal) 
//         return {cost, path};
//         if (best.count(node) && cost > best[node]) 
//         continue;
//         best[node] = cost;
//         for (auto &e : graph[node]) 
//         {
//             auto new_path = path; 
//             new_path.push_back(e.first);   
//             pq.push({cost + e.second, {e.first, new_path}}); 
//         }
//     }
//     return {INT_MAX, {}};
// }

// int main() 
// {
//     graph["Arad"] = {{"Zerind",75},{"Sibiu",140},{"Timisoara",118}};
//     graph["Zerind"] = {{"Arad",75},{"Oradea",71}};
//     graph["Oradea"] = {{"Zerind",71},{"Sibiu",151}};
//     graph["Timisoara"] = {{"Arad",118},{"Lugoj",111}};
//     graph["Lugoj"] = {{"Timisoara",111},{"Mehadia",70}};
//     graph["Mehadia"] = {{"Lugoj",70},{"Drobeta",75}};
//     graph["Drobeta"] = {{"Mehadia",75},{"Craiova",120}};
//     graph["Craiova"] = {{"Drobeta",120},{"Rimnicu Vilcea",146},{"Pitesti",138}};
//     graph["Sibiu"] = {{"Arad",140},{"Oradea",151},{"Fagaras",99},{"Rimnicu Vilcea",80}};
//     graph["Fagaras"] = {{"Sibiu",99},{"Bucharest",211}};
//     graph["Rimnicu Vilcea"] = {{"Sibiu",80},{"Craiova",146},{"Pitesti",97}};
//     graph["Pitesti"] = {{"Rimnicu Vilcea",97},{"Craiova",138},{"Bucharest",101}};
//     graph["Bucharest"] = {{"Fagaras",211},{"Pitesti",101},{"Giurgiu",90},{"Urziceni",85}};
//     graph["Giurgiu"] = {{"Bucharest",90}};
//     graph["Urziceni"] = {{"Bucharest",85},{"Hirsova",98},{"Vaslui",142}};
//     graph["Hirsova"] = {{"Urziceni",98},{"Eforie",86}};
//     graph["Eforie"] = {{"Hirsova",86}};
//     graph["Vaslui"] = {{"Urziceni",142},{"Iasi",92}};
//     graph["Iasi"] = {{"Vaslui",92},{"Neamt",87}};
//     graph["Neamt"] = {{"Iasi",87}};

//     auto [cost, path] = ucs("Arad","Bucharest");
//     cout << "Path : ";
//     for (auto &n : path) cout << n << " -> ";
//     cout << "\nCost : " << cost;
// }



// #include <bits/stdc++.h>
// using namespace std;

// struct Edge { int to, cost; };
// vector<Edge> g[20];

// int ucs(int start, int goal, int n) 
// {
//     using P = pair<int,int>;
//     priority_queue<P, vector<P>, greater<P>> pq;
//     pq.push({0,start});
//     vector<int> best(n,INT_MAX); best[start]=0;

//     while(!pq.empty())
//     {
//         auto [c,u] = pq.top(); pq.pop();
//         if(u==goal) return c;
//         if(c>best[u]) continue;
//         for(auto e:g[u]){
//             if(c+e.cost<best[e.to]){
//                 best[e.to]=c+e.cost;
//                 pq.push({c+e.cost,e.to});
//             }
//         }
//     }
//     return INT_MAX;
// }

// int main(){
//     // Node index mapping:
//     // 0=Arad, 1=Zerind, 2=Sibiu, 3=Timisoara, 4=Oradea
//     // 5=Lugoj, 6=Fagaras, 7=Mehadia, 8=Drobeta, 9=Craiova
//     // 10=Rimnicu Vilcea, 11=Pitesti, 12=Bucharest
//     // 13=Giurgiu, 14=Urziceni, 15=Hirsova, 16=Eforie
//     // 17=Vaslui, 18=Iasi, 19=Neamt

//     // Arad
//     g[0]={{1,75},{2,140},{3,118}};
//     g[1]={{0,75},{4,71}};
//     g[2]={{0,140},{4,151},{6,99},{10,80}};
//     g[3]={{0,118},{5,111}};
//     g[4]={{1,71},{2,151}};
//     g[5]={{3,111},{7,70}};
//     g[6]={{2,99},{12,211}};
//     g[7]={{5,70},{8,75}};
//     g[8]={{7,75},{9,120}};
//     g[9]={{8,120},{10,146},{11,138}};
//     g[10]={{2,80},{9,146},{11,97}};
//     g[11]={{10,97},{9,138},{12,101}};
//     g[12]={{6,211},{11,101},{13,90},{14,85}};
//     g[13]={{12,90}};
//     g[14]={{12,85},{15,98},{17,142}};
//     g[15]={{14,98},{16,86}};
//     g[16]={{15,86}};
//     g[17]={{14,142},{18,92}};
//     g[18]={{17,92},{19,87}};
//     g[19]={{18,87}};

//     // Make graph bidirectional
//     for(int u=0;u<20;u++){
//         for(auto e:g[u]){
//             bool found=false;
//             for(auto f:g[e.to]) if(f.to==u) found=true;
//             if(!found) g[e.to].push_back({u,e.cost});
//         }
//     }

//     cout<<"Cost : "<<ucs(0,12,20); // Arad (0) -> Bucharest (12)
// }



#include <bits/stdc++.h>
using namespace std;

struct Edge {
    char to;
    int cost;
};

int UCS(char start, char goal, map<char, vector<Edge>> &graph) {
  
    priority_queue<pair<int, char>, vector<pair<int, char>>, greater<>> pq;
    pq.push({0, start});

    map<char, int> cost_so_far;
    cost_so_far[start] = 0;

    map<char, char> parent; 

    while(!pq.empty()) 
    {
        auto [current_cost, current_node] = pq.top();
        pq.pop();

        if(current_node == goal) 
        {
           
            vector<char> path;
            char temp = goal;
            while(temp != start) 
            {
                path.push_back(temp);
                temp = parent[temp];
            }
            path.push_back(start);
            reverse(path.begin(), path.end());

            cout << "Path: ";
            for(char c : path) cout << c << " ";
            cout << "\nTotal cost: " << current_cost << "\n";
            return current_cost;
        }

        for(auto &edge : graph[current_node]) 
        {
            int new_cost = current_cost + edge.cost;
            if(!cost_so_far.count(edge.to) || new_cost < cost_so_far[edge.to]) 
            {
                cost_so_far[edge.to] = new_cost;
                parent[edge.to] = current_node;
                pq.push({new_cost, edge.to});
            }
        }
    }

    cout << "No path found.\n";
    return -1;
}

int main() 
{
  
    map<char, vector<Edge>> graph;
    graph['A'] = {{'B', 1}, {'C', 4}};
    graph['B'] = {{'C', 2}, {'D', 5}};
    graph['C'] = {{'D', 1}};
    graph['D'] = {};

    char start = 'A';
    char goal = 'D';

    UCS(start, goal, graph);

    return 0;
}
