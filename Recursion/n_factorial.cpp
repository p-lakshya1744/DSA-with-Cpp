// This program calculates n! using recursive approach

// Time Complexity - O(n)
// Space Complexity - O(n) (because of call stack being used for recursive calls in memory)

# include <iostream>
using namespace std;

int nFactorial(int n){
    if(n==0 || n==1){
        return 1;
    }

    return n * nFactorial(n-1);
}

int main(){
    int n;

    cout << "Enter a number: " << endl;
    cin >> n;

    cout << nFactorial(n) << endl;

    return 0;
}