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
                cout << temp -> data << " ";
                temp = temp -> next;
            }

            cout << endl;
        }

        void push_front(int val){
            Node* newNode = new Node(val);
            if(head==NULL){
                head = tail = newNode;
            }
            else{
                newNode -> next = head;
                head = newNode;
            }
        }

        void push_back(int val){
            Node* newNode = new Node(val);
            if(head==NULL){
                head = tail = newNode;
            }
            else{
                tail -> next = newNode;
                tail = newNode;
            }
        }

        void pop_front(){
            if(head==NULL){
                cout << "Linked List is empty" << endl;
                return;
            }

            cout << "Popped Element: " << head -> data << endl;
            Node* temp = head;
            head = head -> next;
            temp -> next = NULL;
            delete temp; 
        }

        void pop_back(){
            if(head==NULL){
                cout << "Linked List is empty" << endl;
                return;
            }

            cout << "Popped Element: " << tail -> data << endl;
            Node* temp = head;
            while(temp -> next != tail){
                temp = temp -> next;
            }
            temp -> next = NULL;
            delete tail;
            tail = temp;
        }

        void insertElement(int val, int pos){
            if(pos<0){
                return;
            }
            if(pos==0){
                push_front(val);
                return;
            }
            Node* temp = head;
            int count = 0;
            while(temp != NULL){
                if(count==pos-1){
                    Node* newNode = new Node(val);
                    newNode -> next = temp -> next;
                    temp -> next = newNode;
                    return;
                }
                temp = temp -> next;
                count++;
            }
        }
};


int main(){

    List LL;

    LL.push_front(0);
    LL.push_front(-1);
    LL.push_front(-2);
    LL.push_front(-3);

    LL.push_back(1);
    LL.push_back(2);
    LL.push_back(3);

    LL.printLL();

    LL.pop_front();
    LL.pop_back();

    LL.printLL();

    LL.insertElement(5, 5);

    LL.printLL();


    
    return 0;
}