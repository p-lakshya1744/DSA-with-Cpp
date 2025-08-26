// This program implements representation of graphs using adjacency matrix

/*
    Graphs represented:-
        Undirected Unweighted Graph
        Directed Unweighted Graph
        Undirected Weighted Graph
        Directed Unweighted Graph
*/


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

    vector < vector <bool> > AdjMatrix(vertices, vector <bool> (vertices, 0));

    for(int i=0 ; i<edges ; i++){
        int u, v;
        cout << "Enter vertices having edges between them (u, v): " << endl;
        cin >> u >> v;
        AdjMatrix[u][v] = 1;
        AdjMatrix[v][u] = 1;
    }

    for(int i=0 ; i<vertices ; i++){
        for(int j=0 ; j<vertices ; j++){
            cout << AdjMatrix[i][j] << " ";
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

    vector < vector <bool> > AdjMatrix(vertices, vector <bool> (vertices, 0));

    for(int i=0 ; i<edges ; i++){
        int u, v;
        cout << "Enter vertices having edges between them (u, v): " << endl;
        cin >> u >> v;
        AdjMatrix[u][v] = 1;
    }

    for(int i=0 ; i<vertices ; i++){
        for(int j=0 ; j<vertices ; j++){
            cout << AdjMatrix[i][j] << " ";
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

    vector < vector <bool> > AdjMatrix(vertices, vector <bool> (vertices, 0));

    for(int i=0 ; i<edges ; i++){
        int u, v, weight;
        cout << "Enter vertices having edges between them (u, v): " << endl;
        cin >> u >> v;

        cout << "Enter weight on the edge: " << endl;
        cin >> weight;
        AdjMatrix[u][v] = weight;
        AdjMatrix[v][u] = weight;
    }

    for(int i=0 ; i<vertices ; i++){
        for(int j=0 ; j<vertices ; j++){
            cout << AdjMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


// Directed Weighted Graph
# include <iostream>
# include <vector>

using namespace std;

int main(){
    int vertices, edges;

    cout << "Enter number of vertices: " << endl;
    cin >> vertices;

    cout << "Enter number of edges: " << endl;
    cin >> edges;

    vector < vector <bool> > AdjMatrix(vertices, vector <bool> (vertices, 0));

    for(int i=0 ; i<edges ; i++){
        int u, v, weight;
        cout << "Enter vertices having edges between them (u, v): " << endl;
        cin >> u >> v;

        cout << "Enter weight on the edge: " << endl;
        cin >> weight;
        AdjMatrix[u][v] = weight;
    }

    for(int i=0 ; i<vertices ; i++){
        for(int j=0 ; j<vertices ; j++){
            cout << AdjMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}