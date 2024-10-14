#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    for(int i = 0; i < num; i++){
        // space
        for(int j = 0; j < num-i-1; j++){
            cout<<" ";
        }

        // star
        for(int j = 0; j < 2*i+1; j++){
            cout<<"*";
        }

        // space
        for(int j = 0; j < num-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}