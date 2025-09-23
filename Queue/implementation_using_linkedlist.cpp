// This program implements queue data structure using a linked list

# include <iostream>
# include <vector>

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

class Queue{
    Node* head = NULL;
    Node* tail = NULL;

    public:

    void push(int data){
        Node* newNode = new Node(data);
        if(isEmpty()){
            
        }
    }

    void pop(){

    }

    int front(){

    }

    bool isEmpty(){
        if(head==NULL && tail==NULL){
            return true;
        }
        return false;
    }

};

int main(){


    return 0;
}