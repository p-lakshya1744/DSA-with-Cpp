// This program converts a decimal number to binary number

# include <iostream>
# include <cmath>
using namespace std;

int decimalToBinary(int x){
    int power = 1;
    int y = 0; 
    while(x>0){
        int remainder = x%2;
        x /= 2;
        y += (remainder*power);
        power *= 10;
    }
    return y;
}

int main(){
    int num;
    cout << "Enter a decimal number: " << endl;
    cin >> num;

    cout << "Binary Number: " << decimalToBinary(num) << endl;
}