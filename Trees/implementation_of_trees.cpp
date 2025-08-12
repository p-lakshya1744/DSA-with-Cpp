// This program performs the implementation of a binary tree

# include <iostream>
# include <queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};

int main(){

    int x;
    cout << "Enter the root element: " << endl;
    cin >> x;

    int first, second;

    queue <Node*> q;

    // Build the tree
    Node* root = new Node(x);
    q.push(root);

    while(!(q.empty())){
        Node* temp = q.front();
        q.pop();

        cin >> first;
        if(first!=-1){
            temp -> left = new Node(first);
            q.push(temp -> left);
        }

        cin >> second;
        if(second!=-1){
            temp -> right = new Node(second);
            q.push(temp -> right);
        }
    }
    

    return 0;
}