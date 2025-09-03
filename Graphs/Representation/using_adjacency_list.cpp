// This program implements the representation of graphs using adjacency list

/*

    Graphs represented:
        Undirected Unweighted Graph
        Directed Unweighted Graph
        Undirected Weighted Graph
        Directed Weighted Graph

*/

// Time Complexity - O(V+E)
// Space Complexity - O(V+E)


// Undirected Unweighted Graph
# include <iostream>
# include <vector>

using namespace std;

int main(){
    int vertices, edges;

    cout << "Enter number of vertices: " << endl;
    cin >> vertices;

    cout << "Enter number of edges: " << endl;
    cin >> edges;

    vector <vector <int>> AdjList(vertices);

    for(int i=0 ; i<edges ; i++){
        int u, v;
        cout << "Enter vertices having edges between them (u, v): " << endl;
        cin >> u >> v;
        AdjList[u].push_back(v);
        AdjList[v].push_back(u);
    }

    for(int i=0 ; i<vertices ; i++){
        cout << i << "->";
        for(int j=0 ; j<AdjList[i].size() ; j++){
            cout << AdjList[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


// Directed Unweighted Graph
# include <iostream>
# include <vector>

using namespace std;

int main(){
    int vertices, edges;

    cout << "Enter number of vertices: " << endl;
    cin >> vertices;

    cout << "Enter number of edges: " << endl;
    cin >> edges;

    vector <vector <int>> AdjList(vertices);

    for(int i=0 ; i<edges ; i++){
        int u, v;
        cout << "Enter vertices having edges between them (u, v): " << endl;
        cin >> u >> v;
        AdjList[u].push_back(v);
    }

    for(int i=0 ; i<vertices ; i++){
        cout << i << "->";
        for(int j=0 ; j<AdjList[i].size() ; j++){
            cout << AdjList[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


// Undirected Weighted Graph
# include <iostream>
# include <vector>

using namespace std;

int main(){
    int vertices, edges;

    cout << "Enter number of vertices: " << endl;
    cin >> vertices;

    cout << "Enter number of edges: " << endl;
    cin >> edges;

    vector <vector <int>> AdjList(vertices);

    for(int i=0 ; i<edges ; i++){
        int u, v;
        cout << "Enter vertices having edges between them (u, v): " << endl;
        cin >> u >> v;
        AdjList[u].push_back(v);
    }

    for(int i=0 ; i<vertices ; i++){
        cout << i << "->";
        for(int j=0 ; j<AdjList[i].size() ; j++){
            cout << AdjList[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}