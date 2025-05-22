// This program calculates smallest/largest element in an array

# include <iostream>
# include <climits>
using namespace std;

int main(){
    int array[] = {12, 43, 65, 87, 45, 76};

    int smallest = INT_MAX;
    int largest = INT_MIN;

    for(int i=0 ; i<6 ; i++){
        if(array[i]<smallest){
            smallest = array[i];
        }
    }

    for(int i=0 ; i<6 ; i++){
        if(array[i]>largest){
            largest = array[i];
        }
    }

    cout << "The smallest element is: " << smallest << endl;
    cout << "The largest element is: " << largest << endl;

    return 0;
}