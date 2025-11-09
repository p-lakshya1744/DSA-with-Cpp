// This program implements the top view of a tree

# include <iostream>
# include <queue>
# include <map>

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

static int idx = -1;

Node* buildTree(vector <int> preorder){
    idx++;

    if(preorder[idx]==-1){
        return NULL;
    }

    Node* root = new Node(preorder[idx]);
    root -> left = buildTree(preorder);
    root -> right = buildTree(preorder);

    return root;
}

void topView(Node* root){
    
}



int main(){
    vector <int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node* root = buildTree(preorder);

    

    return 0;
}