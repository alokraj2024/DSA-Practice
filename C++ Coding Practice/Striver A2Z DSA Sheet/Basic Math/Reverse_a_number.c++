#include<iostream>
using namespace std;

int reverseNum(int n){
    if(n==0){
        return 0;
    }
    int rev=0;
    while(n>0){
        int lastDigit=n%10;
        n=n/10;
        rev=(rev*10)+lastDigit;

    }
    return rev;
}

int main(){
    cout<<"Etner a no.:";
    int n;
    cin>>n;
    cout<<"The reverse is: "<<reverseNum(n);
    return 0;
}