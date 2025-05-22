// This program converts a binary number to decimal number

# include <iostream>
using namespace std;

int binaryToDecimal(int x){
    int power = 1;
    int y =0;
    while(x>0){
        int remainder = x%10;
        x /=10;
        y += (remainder*power);
        power *= 2;
    }
    return y;
}

int main(){
    int num;
    cout << "Enter a Binary Number: " << endl;
    cin >> num;

    cout << "Decimal  Number: " << binaryToDecimal(num) << endl;

    return 0;
}