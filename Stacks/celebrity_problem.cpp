/*

Given a 2D-Array (n*n), such that arr[i][j] = 1 means the ith person knows jth person, the task is to find the celebrity.
A celebrity is a person who is known to all but does not know anyone.

Return the index of the celebrity, if there is no celebrity return -1.

*/

# include <iostream>
# include <vector>
# include <stack>

using namespace std;

int getCelebrity(vector <vector <int>> arr){
    
};

int main(){
    vector <vector <int>> arr = {{0, 1, 0}, {0, 0, 0}, {0, 1, 0}};

    cout << getCelebrity(arr) << endl;

    return 0;
}