/*

Input: 
int n (say, 4)

Output:
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4

*/


# include <iostream>
using namespace std;

int main(){
    int n;
    int i,j;

    cout << "Enter a value: " << endl;
    cin >> n;

    for(i=0 ; i<=n-1 ; i++){
        for(j=0 ; j<=n-1 ; j++){
            cout << j+1 << "\t";
        }
        cout << "\n";
    }

    return 0;
}