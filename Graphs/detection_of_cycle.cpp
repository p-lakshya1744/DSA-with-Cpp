// This program detects cycle in a graph using DFS

// Time Complexity - O(V+2E)
// Space Complexity - O(V)

# include <iostream>
# include <vector>

using namespace std;

bool detectCycle(int node, int parentNode , vector <vector <int>> adjList, vector <int> isVisited){
    for(int i=0 ; i<adjList.size() ; i++){
        if(node==parentNode){
            continue;
        }
        if(isVisited[adjList[node][i]]==1){
            return 1;
        }

        if(detectCycle(adjList[node][i], node, adjList, isVisited)){
            return 1;
        }
    }

    return 0;
}

bool isCycle(int v, vector <vector <int>> adjList){
    vector <int> isVisited(v, 0);

    for(int i=0 ; i<v ; i++){
        if(!isVisited[i] && detectCycle(0, -1, adjList, isVisited)){
            return 1;
        }
    }
    
    return 0;
}

int main(){
    int v = 5;

    vector <vector <int>> adjList = {{1}, {0, 2, 4}, {1, 3}, {2, 4}, {1, 3}};
    
    cout << isCycle(v, adjList) << endl;

    return 0;
}