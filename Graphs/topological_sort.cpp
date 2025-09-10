// This program Topological Sort on Directed Acyclic Graphs (DAGs) using BFS(Kahn's Algorithm) and DFS


// using DFS

// Time Complexity - O(V+E)
// Space Complexity - O(V)

# include <iostream>
# include <vector>
# include <stack>

using namespace std;

void DFS(int node, vector <vector <int>> adjList, vector <int> &isVisited, stack <int> &s){
    isVisited[node] = 1;

    for(int i=0 ; i<adjList[node].size() ; i++){
        if(!isVisited[adjList[node][i]]){
            DFS(adjList[node][i], adjList, isVisited, s);
        }
    }
    s.push(node);
} 

vector <int> topoSort(int v, vector <vector <int>> adjList){
    vector <int> isVisited(v, 0);
    stack <int> s;

    for(int i=0 ; i<v ; i++){
        if(!isVisited[i]){
            DFS(i, adjList, isVisited, s);
        }
    }

    vector <int> ans;

    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }

    return ans;
}

int main(){
    int v = 4;

    vector <vector <int>> adjList = {{}, {0}, {0}, {0}};

    for(int val: topoSort(v, adjList)){
        cout << val << " ";
    }

    return 0;
}


// using BFS (Kahn's Algorithm)

// Time Complexity - 
// Space Complexity - 

