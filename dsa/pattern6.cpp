#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*"<<" ";
        }
        int space = 2*n - 2*i;
        for(int j=1;j<space;j++){
            cout<<" "<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    
    }


    return 0;
}