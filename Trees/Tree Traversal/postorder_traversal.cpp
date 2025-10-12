// This program implements the postorder traversal for a binary tree

// Time Complexity - O(n)

# include <iostream>
# include <vector>

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

void postorderTraversal(Node* root){
    if(root==NULL){
        return;
    }

    postorderTraversal(root -> left);
    postorderTraversal(root -> right);
    cout << root -> data << endl;

}



int main(){
    vector <int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node* root = buildTree(preorder);

    postorderTraversal(root);

    return 0;
}