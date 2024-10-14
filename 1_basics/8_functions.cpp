#include<bits/stdc++.h>
using namespace std;

// Types of function - void, return, parameterised, non parameterised

void printName(string name){
    cout<<"Hey "<<name<<endl;
}

int sum(int x1, int x2){
    int x3 = x1+x2;
    return x3;
}

void doSomething(int num){
    cout<<num<<endl;
    num +=10;
    cout<<num<<endl;
    num+=10;
    cout<<num<<endl;
}

void doSomething2(int &num){
    cout<<num<<endl;
    num +=10;
    cout<<num<<endl;
    num+=10;
    cout<<num<<endl;
}

int main(){
    string name;
    cout<<"Enter name: ";
    cin>>name;
    printName(name);    

    int x1,x2;
    cout<<"Enter 2 numbers: ";
    cin>>x1>>x2;
    cout<<"Sum of "<<x1<<" and "<<x2<<" is "<<sum(x1,x2)<<endl;

    //pass by value - by default a copy of the original is passed to the function
    int num = 10;
    doSomething(num);
    cout<<num<<endl;

    //pass by reference - when parameter is taken with & then the orginal value is passed
    int num2 = 10;
    doSomething2(num2);
    cout<<num2;
    return 0;
}