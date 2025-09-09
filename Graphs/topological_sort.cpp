// This program Topological Sort on Directed Acyclic Graphs (DAGs)


// using DFS

// Time Complexity
// Space Complexity

# include <iostream>
# include <vector>
# include <stack>

using namespace std;

void DFS(int node, vector <vector <int>> adjList, vector <int> &isVisited, stack <int> s){
    isVisited[node] = 1;

    for(int i=0 ; i<adjList[node].size() ; i++){
        if(!isVisited[adjList[node][i]]){
            DFS(adjList[node][i], adjList, isVisited, s);
        }
        s.push(adjList[node][i]);
    }
} 

vector <int> topoSort(int v, vector <vector <int>> adjList){
    vector <int> isVisited(v, 0);
    stack <int> s;

    for(int i=0 ; i<v ; i++){
        if(!isVisited[i]){
            DFS(0, adjList, isVisited, s);
        }
    }

    vector <int> ans;

    for(int i=0 ; i<s.size() ; i++){
        ans.push_back(s.top());
        s.pop();
    }

    return ans;
}

int main(){
    int v = 4;

    vector <vector <int>> adjList = {{3, 0}, {1, 0}, {2, 0}};

    for(int val: topoSort(v, adjList)){
        cout << val << " ";
    }

    return 0;
}