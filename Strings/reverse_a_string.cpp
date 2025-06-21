/*

Write a function that reverses a string. The input string is given as an array of characters s.
You must do this by modifying the input array in-place with O(1) extra memory.

Example 1:
Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]

Example 2:
Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]

*/

// This approach is followed when a string is given in input (but question gives us an array of characters instead of string literals)
# include <iostream>
using namespace std;

string reverse(char s){
    int start = 0;
    int end = s.size()-1;

    while(start<end){
        swap(s[start], s[end]);
        start++;
        end--;
    }

    return s;
}

int main(){
    char s[5] = {"h", "e", "l", "l", "o"};

    cout << reverse(s) << endl;

    return 0;
}


// This approach is followed when an array of characters is given in input
# include<iostream>
using namespace std;

int main(){

}