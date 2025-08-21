// This program checks whether the given array(or vector) is sorted or not using recursive approach

# include <iostream>
# include <vector>

using namespace std;

bool isSorted(vector <int> &nums, int n){
    if(n==0 || n==1){
        return true;
    }
    return nums[n-1] >= nums[n-2] && isSorted(nums, n-1);
}

int main(){
    vector <int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = nums.size();

    cout << isSorted(nums, n);

    return 0;
}