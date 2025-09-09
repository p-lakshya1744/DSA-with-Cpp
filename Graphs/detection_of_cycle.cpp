// This program detects cycle in a graph

// Time Complexity - O(V+2E)
// Space Complexity - O(V)

# include <iostream>
# include <vector>

using namespace std;

bool detectCycle(int node, int parentNode , vector <vector <int>> adjList, vector <int> isVisited){
    
}

bool isCycle(int v, vector <vector <int>> adjList){
    vector <int> isVisited(v, 0);
    
    return detectCycle(0, -1, adjList, isVisited);
}

int main(){
    int v = 5;

    vector <vector <int>> adjList = {{1}, {0, 2, 4}, {1, 3}, {2, 4}, {1, 3}};
    
    cout << isCycle(v, adjList) << endl;

    return 0;
}