#include<bits/stdc++.h>
using namespace std;

void print(int n){
    int count = 0;

    if(count == n){
        return;
    }else{
        cout<<count;
        count = count + 1;
        print(n);
    }
}


// Recursion: When a function calls itself
int main(){
    int n;
    cin>>n;
    cout<<"Enter a nunmber: "<<n;
    print(n);

    return 0;
}