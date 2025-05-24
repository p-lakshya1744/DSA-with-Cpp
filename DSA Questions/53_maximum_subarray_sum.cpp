/*

Given an integer array nums, find the subarray with the largest sum, and return its sum.

Example 1:
Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.

Example 2:
Input: nums = [1]
Output: 1
Explanation: The subarray [1] has the largest sum 1.

Example 3:
Input: nums = [5,4,-1,7,8]
Output: 23
Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.
 

Constraints:
1 <= nums.length <= 105
-104 <= nums[i] <= 104
 
Follow up: If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.

*/


// This is the brute force approach with time complexity O(n^2)

// # include <iostream>
// #define INT_MIN (-2147483647 - 1)

// using namespace std;

// int main(){
//     int nums[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
//     int size = sizeof(nums)/sizeof(nums[0]);

//     int maxSum = INT_MIN;

//     for(int i=0 ; i<size ; i++){
//         int currSum = nums[i];
//         for(int j=i+1 ; j<size ; j++){
//             currSum += nums[j];
//             maxSum = max(currSum, maxSum);
//         }
//     }
//     cout << maxSum << endl;

//     return 0;
// }


// This is the best approach (Kadane's Algorithm) with time complexity O(n)

# include <iostream>
#define INT_MIN (-2147483647 - 1)

using namespace std;

int main(){
    int nums[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size = sizeof(nums)/sizeof(nums[0]);

    int currSum = 0;
    int maxSum = INT_MIN;

    for(int i=0 ; i<size ; i++){
        currSum += nums[i];
        maxSum = max(currSum, maxSum);
        if(currSum<0){
            currSum = 0;
        }
    }

    cout << maxSum << endl;

    return 0;
}