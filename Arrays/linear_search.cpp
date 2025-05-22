// This program performs linear search in an array
// Note: Return -1, if element is not found

# include <iostream>
using namespace std;

int linearSearch(int array[], int size, int target){
    for(int i=0 ; i<size ; i++){
        if(array[i]==target){
            return i;
        }
    }
    return -1;
}

int main(){
    int inputArray[] = {23, 43, 65, 76, 87, 23};
    int target;

    cout << "Enter the element to be searched: " << endl;
    cin >> target;

    cout << "The element is present at " << linearSearch(inputArray, 6, target) << " position" << endl;

    return 0;
}