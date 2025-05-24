/*

Given an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

Example 1:
Input: nums = [3,2,3]
Output: 3

Example 2:
Input: nums = [2,2,1,1,1,2,2]
Output: 2
 
Constraints:
n == nums.length
1 <= n <= 5 * 10^4
-10^9 <= nums[i] <= 10^9
 
Follow-up: Could you solve the problem in linear time and in O(1) space?

*/


// This is the brute force approach with time complexity O(n^2)

// # include <iostream>
// using namespace std;

// int main(){
//     int nums[] = {3,2,3};
//     int n = sizeof(nums)/sizeof(nums[0]);

//     for(int i=0 ; i<n ; i++){
//         int freq = 0;
//         for(int j=0 ; j<n ; j++){
//             if(nums[i]==nums[j]){
//                 freq++;
//             }
//         }
//         if(freq>(n/2)){
//             cout << nums[i] << endl;
//             break;
//         }
//     }

//     return 0;
// }


// This is a more optimized approach(average case) with time complexity O(nlogn)

// # include <iostream>
// using namespace std;

// int main(){
//     int nums[] = {6, 5, 5}; // Array or vector needs to be sorted first which makes the complexity O(nlogn)
//     int n = sizeof(nums)/sizeof(nums[0]);
//     int freq = 1;
//     int ans = nums[0];

//     for(int i=0 ; i<n ; i++){
//         if(nums[i]==nums[i+1]){
//             freq++;
//         }
//         else{
//             freq = 1;
//         }
//         if(freq>(n/2)){
//             ans = nums[i];
//         }
//     }

//     cout << ans << endl;

//     return 0;
// }


// This is the best approach (Moore's Voting Algorithm) with time complexity O(n)

# include <iostream>
# include <vector>
using namespace std;

int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int freq = 0;
        int ans = 0;

        for(int i=0 ; i<n ; i++){
            if(freq==0){
                ans = nums[i];
            }
            if(nums[i]==ans){
                freq++;
            }
            else{
                freq--;
            }
            
        }

        return ans;
    }

int main(){
    vector <int> nums = {2,2,1,1,1,2,2};

    cout << majorityElement(nums) << endl;

    return 0;
}