/*

Input: 
int n (say, 4)

Output:
1
2 1
3 2 1
4 3 2 1

*/

# include <iostream>
using namespace std;

int main(){
    int n;
    int i, j;

    cout << "Enter a value: " << endl;
    cin >> n;

    for(i=0 ; i<n ; i++){
        for(j=i+1 ; j>0 ; j--){
            cout << j << "\t";
        }
        cout << "\n";
    }

    return 0;
}