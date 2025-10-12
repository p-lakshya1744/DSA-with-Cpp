// This program implements the level order traversal for a binary tree
// This approach is BFS-based


// Time Complexity - O(n)

# include <iostream>
# include <vector>
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

void levelorderTraversal(Node* root){
    queue <Node*> q;

    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* currNode = q.front();
        q.pop();

        if(currNode==NULL){
            if(!q.empty()){
                cout << endl;
                q.push(NULL);
                continue;
            }
            else{
                break;
            }
        }

        cout << currNode -> data << " ";

        if(currNode -> left != NULL){
            q.push(currNode -> left);
        }

        if(currNode -> right != NULL){
            q.push(currNode -> right);
        }
    }

}



int main(){
    vector <int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node* root = buildTree(preorder);

    levelorderTraversal(root);

    return 0;
}