#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    for(int i = num; i > 0; i--){
        // space
        for(int j = i; j < num ; j++){
            cout<<" ";
        }

        // star
        for(int j = 0; j < 2*i-1; j++){
            cout<<"*";
        }

        // space
        for(int j = i; j < num ; j++){
            cout<<" ";
        }
        cout<<endl;
    }


    return 0;
}