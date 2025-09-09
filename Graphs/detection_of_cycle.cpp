// This program detects cycle in a graph

# include <iostream>
# include <vector>

using namespace std;

bool detectCycle(int v, vector <vector <int>> adjList){
    
}

int main(){
    int v = 5;
    int e = 5;

    vector <vector <int>> adjList = {{1}, {0, 2, 4}, {1, 3}, {2, 4}, {1, 3}};
    
    cout << detectCycle(v, adjList) << endl;

    return 0;
}