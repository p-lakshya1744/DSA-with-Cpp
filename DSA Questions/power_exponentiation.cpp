/*

Implement pow(x, n), which calculates x raised to the power n (i.e., xn).

Example 1:
Input: x = 2.00000, n = 10
Output: 1024.00000

Example 2:
Input: x = 2.10000, n = 3
Output: 9.26100

Example 3:
Input: x = 2.00000, n = -2
Output: 0.25000
Explanation: 2-2 = 1/22 = 1/4 = 0.25

*/

# include <iostream>
using namespace std;

double power(double x, long n){
    double ans = 1.0;

    if(x==0){
        return 0;
    }

    if(n==0){
        return 1;
    }

    if(n<0){
        n *= -1;
        x = 1/x;
    }

    while(n>0){
        if(n%2==0){
            n /= 2;
            x = x*x;
        }
        if(n%2==1){
            ans *= x;
            n -= 1;
        }
    }

    return ans;
}

int main(){

     double x = 2.00000; 
     long n = 10;

    //  double x = 2.10000;
    //  long n = 3;

    //  double x = 2.00000; 
    //  long n = -2;

     cout << power(x, n) << endl;

     return 0;
}