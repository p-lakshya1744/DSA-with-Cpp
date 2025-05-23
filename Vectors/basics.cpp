// This program tests basics of 'Vectors'

# include <iostream>
# include <vector>
using namespace std;

int main(){
    // vector <int> vec = {1, 2, 3, 4, 5};
    // cout << vec[0] << endl;
    // cout << vec[1] << endl;
    // cout << vec[2] << endl;
    // cout << vec[3] << endl;
    // cout << vec[4] << endl;

    // for(int val: vec){
    //     cout << val << "\t";
    // }

    // cout << "Size: " << vec.size() << endl;

    vector <int> vec;

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    vec.pop_back();

    // for(int val: vec){
    //     cout << val << "\t";
    // }

    // cout << vec.front() << endl;
    // cout << vec.back() << endl;

    // cout << vec.at(1) << endl;

    return 0;
}

