// This program is to check whether a number is prime or not

# include <iostream>
using namespace std;

string isPrime(int num){
    for(int i=2 ; i<num*num ; i++){
        if(num%i == 0){
            return "Not Prime";
        }
    } 
    return "Prime";
}

int main(){
    int num = 42;

    cout << isPrime(num) << endl;

    return 0;
}