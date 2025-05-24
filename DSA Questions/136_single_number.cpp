/*

Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
You must implement a solution with a linear runtime complexity and use only constant extra space.

Example 1:
Input: nums = [2,2,1]
Output: 1

Example 2:
Input: nums = [4,1,2,1,2]
Output: 4

Example 3:
Input: nums = [1]
Output: 1

*/


// This is the best approach (using XOR bitwise operator) with linear time complexity O(n)

# include <iostream>
# include <vector>

using namespace std;

int singleNumber(vector<int>& nums){
    int ans = 0;
    for(int val: nums){
        ans ^= val;
    }
    return ans;
}

int main(){
    vector <int> nums = {2, 2, 1};

    cout << singleNumber(nums) << endl;

    return 0;
}