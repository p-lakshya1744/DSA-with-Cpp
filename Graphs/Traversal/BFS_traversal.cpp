// This program implements Breadth-First-Search (BFS) traversal on a graph represented through adjacency list

# include <iostream>
# include <vector>
# include <queue>

using namespace std;

vector <int> bfsTraversal(int v, vector <vector <int>> adjList){
    queue <int> q;
    vector <bool> isVisited(v, 0);
    vector <int> ans;

    
}

int main(){
    vector <vector <int>> adjList = {{2, 3, 1}, {0}, {0, 4}, {0}, {2}};
    int v = 5;

    vector <int> result =  bfsTraversal(v, adjList);

    for(int val: result){
        cout << val << " ";
    }

    return 0;
}