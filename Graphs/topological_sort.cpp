// This program Topological Sort on Directed Acyclic Graphs (DAGs)

# include <iostream>
# include <vector>
# include <stack>

using namespace std;

void DFS(int node, vector <vector <int>> adjList, vector <int> isVisited, stack <int> s){
    
} 

vector <int> topoSort(int v, vector <vector <int>> adjList){
    vector <int> isVisited(v, 0);
    stack <int> s;

    DFS(0, adjList, isVisited, s);
}

int main(){
    int v = 4;

    vector <vector <int>> adjList = {{3, 0}, {1, 0}, {2, 0}};

    cout << topoSort(v, adjList) << endl;

    return 0;
}