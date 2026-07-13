#include<iostream>
using namespace std;
int main(){
    cout<<"Enter three distinct integers: ";
    int value1,value2, value3;
    cin>>value1>>value2>>value3;
    
    if(value1>value2 && value1>value3){
        cout<<value1<<" is grater then "<<value2<<" and "<<value3;
    }
    else if(value2>value1 && value2>value3){
        cout<<value2<<" is grater then "<<value1<<" and "<<value3;
    }
    else if(value3>value1 && value3>value2){
        cout<<value3<<" is grater then "<<value1<<" and "<<value2;
    }
    else{
        cout<<"All the valuse are same.";
    }
    
    return 0;
}