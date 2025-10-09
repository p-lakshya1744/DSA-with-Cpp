// This program finds the previous smaller element for any element in a vector

// Time Complexity - O(n)
// Space Complexity - O(n)

# include <iostream>
# include <vector>
# include <stack>

using namespace std;

int main(){
    vector <int> nums = {3, 1, 0, 8, 6};

    vector <int> ans(nums.size(), 0);
    stack <int> s;

    for(int i=0 ; i<nums.size() ; i++){
        while(s.size()>0 && nums[s.top()]>=nums[i]){
            s.pop();
        }

        if(s.empty()){
            ans[i] = -1;
        }
        else{
            ans[i] = nums[s.top()];
        }

        s.push(i);
    }

    for(int val: ans){
        cout << val << " ";
    }

    return 0;
}