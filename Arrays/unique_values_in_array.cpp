// This program print all unique values in an array

/*
For example, 
In array: [1, 2, 3, 1, 2, 3, 4, 5]

Here, the only unique values are 4 and 5. 
So, 4 gets printed.
*/

# include <iostream>
using namespace std;

void uniqueValue(int arr[], int size){
    for(int i=0 ; i<size ; i++){
        bool isUnique = true;

        for(int j=0 ; j<size ; j++){
            if(i!=j && arr[i]==arr[j]){
                isUnique = false;
                break;
            }
        }
        if(isUnique){
            cout << arr[i] << "\t";
        }
    }

}

int main(){
    int arr[] = {1, 2, 3, 1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(int);

    cout << "The unique values are: " << endl;
    uniqueValue(arr, size);

    return 0;
}