#include<bits/stdc++.h>
using namespace std;


// 1. Print name N times
void printName(int n){
    if(n == 0){
        return;
    }else{
        cout<<"Hariom ";
        n = n-1;
        printName(n);
    }
}


// 2. Print linearly from 1 to N
void printLinearly(int i, int n){
    if(i>n){
        return;
    }else{
        cout<<i<<" ";
        printLinearly(i+1,n);
    }
}


// 3. Print linearly from N to 1
void printLinearlyBackward(int n){
    if(n<=0){
        return;
    }else{
        cout<<n<<" ";
        printLinearlyBackward(n-1);
    }
}

int main(){
    // printName(10);

    // printLinearly(1,20);

    // printLinearlyBackward(10);

    
    return 0;
}