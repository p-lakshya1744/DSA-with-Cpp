// This program performs the implementation of stacks using vectors, linked lists and C++ STL


// Implementation using vectors
// # include <iostream>
// # include <vector>
// using namespace std;

// class Stack{
//     public:
//     vector <int> v;

//     void pushStack(int val){
//         v.push_back(val);
//     }

//     void travStack(){
//         for(int val : v){
//         cout<< val <<" ";
//         }
//     }

//     void popStack(){
//         if(v.size()!=0){
//             v.pop_back();
//         }
//         else{
//             cout << "Stack is empty" << endl;
//         }
//     }

//     int topStack(){
//         return v.size()-1;
//     }
     
// };

// int main(){
//     Stack s;
//     s.pushStack(10);
//     s.pushStack(12);
//     s.pushStack(10);
//     s.travStack();
//     s.popStack();
//     return 0;
// }


// Immplementation using Linked Lists
# include <iostream>
# include <list>
using namespace std;

class Stack{
    public:
        list <int> ll;

        void pushStack(int val){
            ll.push_front(val);
        }

        void popStack(){
            if(ll.size()!=0){
                ll.pop_front();
            }
            else{
                cout << "Stack is empty" << endl;
            }
        }

        int topStack(){
            return ll.front();
        }

};

int main(){
    Stack s;
    s.pushStack(10);
    s.pushStack(10);
    s.pushStack(10);

    s.topStack();

    s.popStack();
    return 0;
}
