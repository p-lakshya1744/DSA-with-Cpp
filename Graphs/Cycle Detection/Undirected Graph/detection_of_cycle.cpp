// This program detects cycle in an undirected graph using DFS and BFS


// using DFS

// Time Complexity - O(V+E)
// Space Complexity - O(V)

// # include <iostream>
// # include <vector>

// using namespace std;

// bool detectCycle(int node, int parentNode , vector <vector <int>> adjList, vector <int> &isVisited){
//     isVisited[node]=1;

//     for(int i=0 ; i<adjList[node].size() ; i++){
//         if(node==parentNode){
//             continue;
//         }
//         if(isVisited[adjList[node][i]]==1){
//             return true;
//         }

//         if(detectCycle(adjList[node][i], node, adjList, isVisited)){
//             return true;
//         }
//     }

//     return false;
// }

// bool isCycle(int v, vector <vector <int>> adjList){
//     vector <int> isVisited(v, 0);

//     for(int i=0 ; i<v ; i++){
//         if(!isVisited[i] && detectCycle(i, -1, adjList, isVisited)){
//             return true;
//         }
//     }
    
//     return false;
// }

// int main(){
//     int v = 5;

//     vector <vector <int>> adjList = {{1}, {0, 2, 4}, {1, 3}, {2, 4}, {1, 3}};
    
//     cout << isCycle(v, adjList) << endl;

//     return 0;
// }


// using BFS

// Time Complexity - O(V+E)
// Space Complexity - O(V)

# include <iostream>
# include <vector>
# include <queue>

using namespace std;

bool detectCycle(vector <vector <int>> adjList, vector <int> &isVisited){
    queue <pair<int, int>> q;
    isVisited[0] = 1;
    q.push(make_pair(0, -1));

    while(!q.empty()){
        
    }
}

bool isCycle(int v, vector <vector <int>> adjList){
    vector <int> isVisited(v, 0);

    detectCycle(adjList, isVisited);
}

int main(){
    int v = 5;

    vector <vector <int>> adjList = {{1}, {0, 2, 4}, {1, 3}, {2, 4}, {1, 3}};

    cout << isCycle(v, adjList) << endl;

    return 0;
}