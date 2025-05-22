// This program reverses an array using two pointers approach

# include <iostream>
using namespace std;

void reverseArray(int arr[], int size){
    
    int start = 0;
    int end = size-1;

    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(array)/sizeof(int);

    reverseArray(array, size);

    cout << "The reversed array is: " << endl;

    for(int i=0 ; i<9 ; i++){
        cout << array[i] << "\t";
    }

    return 0;
}
