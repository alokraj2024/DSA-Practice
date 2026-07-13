#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a no.:";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int value=1;
        for(int j=1;j<=i;j++){
            cout<<value;
            value++;
        }
        cout<<endl;
    }
    return 0;
}