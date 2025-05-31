/*

You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
Find two lines that together with the x-axis form a container, such that the container contains the most water.
Return the maximum amount of water a container can store.

Notice that you may not slant the container.

Example 1:
Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.

Example 2:
Input: height = [1,1]
Output: 1

*/

// This is the brute force approach with time complexity O(n^2)

// # include <iostream>
// # include <vector>
// using namespace std;

// int maxArea(vector<int>& height) {
//     int n = height.size();
//     int maxAmount = INT_MIN;
//     for(int i=0 ; i<n-1 ; i++){
//         for(int j=i+1 ; j<n ; j++){
//             int length = min(height[i], height[j]);
//             int width = j-i;
//             int amount = length*width;
//             maxAmount = max(maxAmount, amount);
//         }
//     }
//     return maxAmount;
            
// }

// int main(){
//     vector <int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

//     cout << maxArea(height) << endl;

//     return 0; 
// }



// This is the best approach (two pointers) with O(n) time complexity

# include <iostream>
# include <vector>

using namespace std;

int maxArea(vector<int>& height) {
    int n = height.size();
    int lp = 0;
    int rp = n-1;
    int maxAmount = INT_MIN;

    while(lp<rp){
        int width = rp-lp;
        int length = min(height[lp], height[rp]);
        int currAmount = width*length;
        maxAmount = max(maxAmount, currAmount);

        if(height[lp]<=height[rp]){
            lp++;
        }
        else{
            rp--;
        }

    }

    return maxAmount;
            
    }

int main(){
    vector <int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    cout << maxArea(height);

    return 0;
}

