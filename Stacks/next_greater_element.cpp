// This program finds the next greater element for any element in a vector

// Time Complexity - O(n)
// Space Complexity - O(n)

# include <iostream>
# include <vector>
# include <stack>

using namespace std;

int main(){
    vector <int> nums = {6, 8, 0, 1, 3};

    vector <int> ans(nums.size(), 0);
    stack <int> s;

    for(int i=nums.size()-1 ; i>=0 ; i--){
        while(s.size()>0 && nums[s.top()]<=nums[i]){
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