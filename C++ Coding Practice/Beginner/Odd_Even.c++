#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a no.: ";
    int userValue;
    cin>>userValue;
    
    if(userValue%2==0){
        cout<<"The no. "<<userValue<<" is Even.";
    }
    else{
        cout<<"The no. "<<userValue<<" is Odd.";
    }
    return 0;
}