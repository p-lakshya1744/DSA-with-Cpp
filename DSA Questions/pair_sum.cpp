//Return pair of elements in a sorted array whose sum is equal to given target

/*

For Example, 
Input:
nums[] = {2, 7, 11, 15}
target = 18

Output: 1, 2

*/

// This is the brute force approach with time complexity O(n^2)

// # include <iostream>
// using namespace std;

// int main(){
//     int nums[] = {2, 7, 11, 15};
//     int size = sizeof(nums)/sizeof(nums[0]);
//     int target = 18;

//     for(int i=0 ; i<size ; i++){
//         for(int j=i+1 ; j<size ; j++){
//             if(nums[i]+nums[j]==target){
//                 cout << i << "," << j << endl;
//             }
//         }
//     }

//     return 0;
// }



// This is the best approach using two-pointers with time complexity O(n)

# include <iostream>
using namespace std;

int main(){
    int nums[] = {2, 7, 11, 15};
    int size = sizeof(nums)/sizeof(nums[0]);
    int target = 18;

    int start = 0;
    int end = size-1;

    while(start<end){
        if(nums[start]+nums[end]>target){
            end--;
        }
        else if(nums[start]+nums[end]<target){
            start++;
        }
        else{
            cout << start << "," << end << endl;
            break;
        }
    }

    return 0;
}