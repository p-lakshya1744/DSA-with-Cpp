/*

Input: 
int n (say, 4)

Output:
1
2 2
3 3 3 
4 4 4 4 

*/

# include <iostream>
using namespace std;

int main(){
    int n;
    int i, j;

    cout << "Enter a value: " << endl;
    cin >> n;
    
    for(i=0 ; i<n ; i++){
        for(j=0 ; j<i+1 ; j++){
            cout << i+1 << "\t";
        }
        cout << "\n";
    }

    return 0;
}