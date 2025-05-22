/*

Input: 
int n (say, 4)

Output:
1
2 3
4 5 6
7 8 9 10

This pattern is called Floyd's Triangle Pattern.

*/

# include <iostream>
using namespace std;

int main(){
    int n;
    int i, j;
    int num = 1;

    cout<< "Enter a value: " << endl;
    cin >> n;

    for(i=0 ; i<n ; i++){
        for(j=0 ; j<i+1 ; j++){
            cout << num << "\t";
            num++;
        }
        cout << "\n";
    }

    return 0;
}