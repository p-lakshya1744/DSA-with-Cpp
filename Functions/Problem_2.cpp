//Calculate sum of digits of a nunmber using functions

# include <iostream>
using namespace std;

int sumOfDigits(int num){
    int digitsSum = 0;
    while(num>0){
        int lastDigit = num%10;
        num /= 10;
        digitsSum += lastDigit;
    }
    return digitsSum;
}

int main(){
    int num;
    cout << "Enter a number: " << endl;
    cin >> num;
    cout << sumOfDigits(num) << endl;

    return 0;
}