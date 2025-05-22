// Calculate sum of numbers from 1 to n using functions

# include <iostream>
using namespace std;

int calculateSum(int n){
    int sum = 0;
    for(int i=1 ; i<=n ; i++){
        sum += i;
    }
    return sum;
}

int main(){
    cout << calculateSum(10) << endl;
    return 0;
}