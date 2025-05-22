/*

Input: 
int n (say, 4)

Output: 
      *
    *   *
  *        *
*            *
  *        *   
    *   *
      *
      
*/

# include <iostream>
using namespace std;

int main(){
    int n;
    int i, j;

    cout<< "Enter a value: " << endl;
    cin >> n;

    for(i=0 ; i<n ; i++){
        for(j=0 ; j<n-i-1 ; j++){
            cout << "" << "\t";
        }
        cout << "*" << "\t";
        if(i!=0){
            for(j=0 ; j<2*i-1 ; j++){
                cout << "" << "\t";
            }
            cout << "*" << "\t";
        }
        cout << "\n";
    }

    for(i=0 ; i<n-1 ; i++){
        for(j=0 ; j<i+1 ; j++){
            cout << "" << "\t";
        }
        cout << "*" << "\t";
        if(i!=n-2){
            for(j=0 ; j<(2*(n-2-i))-1 ; j++){
                cout << "" << "\t";
            }
            cout << "*" << "\t";
        }
        cout << "\n";
    }

    return 0;
}