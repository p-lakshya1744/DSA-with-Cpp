/*

Input: 
int n (say, 4)

Output:
*
* * 
* * *
* * * *

*/

#include <iostream>
using namespace std;

int main(){
    int n;
    int i, j;

    cout << "Enter a value: " << endl;
    cin >> n;

    for(i=0 ; i<n ; i++){
        for(j=0 ; j<i+1 ; j++){
            cout << "*" << "\t";
        }
        cout << endl;
    }

    return 0;
}