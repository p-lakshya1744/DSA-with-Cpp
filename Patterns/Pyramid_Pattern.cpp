/*

Input: 
int n (say, 4)

Output:
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1 

*/

# include <iostream>
using namespace std;

int main(){
    int n;
    int i, j, k;

    cout << "Enter a value: " << endl;
    cin >> n;

    for(i=0 ; i<n ; i++){
        for(j=0 ; j<n-i-1 ; j++){
            cout << "" << "\t";
        }
        for(j=0 ; j<i+1 ; j++){
            cout << j+1 << "\t";
        }
        for(j=i ; j>0 ; j--){
            cout << j << "\t";
        }
        cout << "\n";
    }

    return 0;
}