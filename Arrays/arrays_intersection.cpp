// This program prints intersection of two arrays

/*
For example, 
arr1 = {1, 2, 3, 4, 5}
arr2 = {1, 2, 3}

So, intersection = {1, 2, 3}
*/

# include <iostream>
using namespace std;

void calculateIntersection(int arr1[], int arr2[], int size1, int size2){
    for(int i=0 ; i<size1 ; i++){
        for(int j=0 ; j<size2 ; j++){
            if(arr1[i]==arr2[j]){
                cout << arr1[i] << endl;
            }
        }
    }
}

int main(){
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3};

    int size1 = sizeof(arr1)/sizeof(int);
    int size2 = sizeof(arr2)/sizeof(int);

    calculateIntersection(arr1, arr2, size1, size2);

    return 0;
}