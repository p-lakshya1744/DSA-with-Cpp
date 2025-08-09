// This program performs the Implementation of a Linked List from scratch

# include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int val){
            data = val;
            next = NULL;
        }
};

class List{
    private:
        Node* head;
        Node* tail;

    public:
        List(){
            head = tail = NULL;
        }

        void printLL(){
            Node* temp = head;

            while(temp != NULL){
                cout << temp -> data << " " << endl;
                temp = temp -> next;
            }
        }

        void push_front(int val){
            Node* newNode = new Node(val);
            if(head==NULL){
                head = tail = newNode;
                newNode -> data = val;
                newNode -> next = NULL;
            }
            else{
                
            }
        }
};


int main(){

    Node n1(10);


    return 0;
}