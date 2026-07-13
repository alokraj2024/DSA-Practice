#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a year: ";
    int userYear;
    cin>>userYear;
    
    if((userYear%4==0 && userYear%100!=0) || (userYear%400==0)){
        cout<<userYear<<" is a leap year.";
    }
    else{
        cout<<userYear<<" is not a leap year.";
    }
    return 0;
}