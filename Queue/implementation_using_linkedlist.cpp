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
            head = tail = newNode;
        }
        else{
            tail -> next = newNode;
            tail = newNode;
        }
    }

    void pop(){
        if(isEmpty()){
            cout << "LL is empty" << endl;
        }
        else{
            Node* temp = head;
            head = head -> next;
            delete temp;
            if(head==NULL){
                tail = NULL;
            }
        }
    }

    int front(){
        if(isEmpty()){
            cout << "LL is empty" << endl;
            return -1;
        }
        return head -> data;
    }

    bool isEmpty(){
        if(head==NULL && tail==NULL){
            return true;
        }
        return false;
    }

};

int main(){
    Queue q;

    q.push(1);
    q.push(2);
    q.push(3);

    while(!(q.isEmpty())){
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}