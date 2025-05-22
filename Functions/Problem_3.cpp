// Calculate Binomial Coefficient nCr for given n and r using functions

# include <iostream>
using namespace std;

int calculateFactorial(int x){
    int factorial = 1;
    for(int i=1 ; i<=x ; i++){
        factorial *= i;
    }
    return factorial;
}

int binomialCoefficient(int n, int r){
    double nCr = (calculateFactorial(n)/(calculateFactorial(r)*calculateFactorial(n-r)));
    return nCr;
}

int main(){
    int n, r;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    cout << "Enter the value of r: " << endl;
    cin >> r;

    cout << "Binomial Coefficient nCr: " << binomialCoefficient(n, r) << endl;

    return 0;
}