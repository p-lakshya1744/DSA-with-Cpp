// This program performs the implementation of stacks using vectors, linked lists and C++ STL


// Implementation using vectors
# include <iostream>
# include <vector>
using namespace std;

class Stack{
    public:
    vector <int> v;

    void pushStack(int val){
        v.push_back(val);
    }

    void popStack(){
        v.pop_back();
    }

    int topStack(){
        return v.size()-1;
    }
};

int main(){

    return 0;
}
