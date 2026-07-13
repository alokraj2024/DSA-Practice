// You are given an integer n. You need to return the number of digits in the number.
// The number will have no leading zeroes, except when the number is 0 itself.

// Example 1
// Input: n = 4
// Output: 1
// Explanation: There is only 1 digit in 4.

// Example 2
// Input: n = 14
// Output: 2
// Explanation: There are 2 digits in 14.

#include<iostream>
using namespace std;

int countDigit(int n){
    if(n==0){
        return 1;
    }
    int count=0;
    while(n>0){
        count++;
        n=n/10;
    }
    return count;
}

int main(){
    cout<<"Enter a no.:";
    int n;
    cin>>n;
    cout<<"The no. of digits you entered is: "<<countDigit(n);
    return 0;

}