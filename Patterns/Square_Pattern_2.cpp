/*

Input:
int n (say, 3)

Output:
1 2 3
4 5 6
7 8 9

*/

# include <iostream>
using namespace std;

int main(){
    int n;
    int i, j;
    int num = 1;

    cout << "Enter a value: " << endl;
    cin >> n;

    for(i=0 ; i<=n-1 ; i++){
        for(j=0 ; j<=n-1 ; j++){
            cout << num << "\t";
            num++;
        }
        cout << "\n";
    }

    return 0;
}