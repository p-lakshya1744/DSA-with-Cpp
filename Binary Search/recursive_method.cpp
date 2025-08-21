// This program performs binary search in a vector in a recursive manner

# include <iostream>
# include <vector>

using namespace std;

int binarySearch(vector <int> &nums, int target, int start, int end){
    
}

int main(){
    vector <int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 7;

    int start = 0;
    int end = nums.size()-1;

    cout << binarySearch(nums, target, start, end) << endl;
    return 0;
}