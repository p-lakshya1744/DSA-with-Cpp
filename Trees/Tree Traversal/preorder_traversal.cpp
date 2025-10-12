// This program implements teh preorder traversal on a binary tree

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

void preorderTraversal(Node* root){
    if(root==NULL){
        return ;
    }

    cout << root -> data << endl;
    preorderTraversal(root -> left);
    preorderTraversal(root -> right);

}



int main(){
    vector <int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node* root = buildTree(preorder);

    preorderTraversal(root);

    return 0;
}