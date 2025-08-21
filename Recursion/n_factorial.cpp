// This program calculates n! using recursive approach

# include <iostream>
using namespace std;

int nFactorial(int n){
    int ans = 1;

    if(n==1){
        return ans;
    }

    ans = n * nFactorial(n-1);
}

int main(){
    int n;

    cout << "Enter a number: " << endl;
    cin >> n;

    cout << nFactorial(n) << endl;

    return 0;
}