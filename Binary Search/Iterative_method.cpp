// This program performs binary search on a vector in an iterative manner

# include <iostream>
# include <vector>

using namespace std;

int binarySearch(vector <int> nums, int target){
    int size = nums.size();
    int start = 0;
    int end = size-1;

    while(start<=end){
        // int mid = (start+end)/2;
        int mid = start + ((end-start)/2); // Optimization to prevent overflow in worst case scenario when both are considered INT_MAX
        if(target<nums[mid]){
            end = mid-1;
        }
        else if(target>nums[mid]){
            start = mid+1;
        }
        else{
            return mid;
        }
    }

    return -1;

}

int main(){
    vector <int> num1 = {-1, 0, 3, 4, 5, 9, 12}; // odd number of elements
    int target1 = 12;

    vector <int> num2 = {-1, 0, 3, 4, 9, 12}; // even number of elements
    int target2 = 0;

    cout << binarySearch(num1, target1) << endl;
    cout << binarySearch(num2, target2) << endl;

    return 0;

}