#include<iostream>
using namespace std;

void palindrome(int n){
    int rev=0;
    int temp=n;
    while(n>0){
        int lastDigit=n%10;
        n=n/10;
        rev=(rev*10)+lastDigit;
    }
    if(temp==rev){
        cout<<"It is a Palindrome Number.";
    }
    else{
        cout<<"It is not a Palindrome Number.";
    }
}

int main(){
    cout<<"Enter a no.:";
    int n;
    cin>>n;
    palindrome(n);
    return 0;
}