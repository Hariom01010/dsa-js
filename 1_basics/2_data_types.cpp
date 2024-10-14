#include<bits/stdc++.h>
using namespace std;

int main(){
    // int
    int x1 = 10;
    // long
    long x2 = 15;

    long long x3 = 150000000;

    // float, double
    float y1 = 1.2;
    double y2 = 1.23454;


    //string, getline
    string s1; // string only picks up until space is detected
    cout<<"Enter value of s1: ";
    cin>>s1;
    cout<<s1;

    string s2;
    cout<<"Enter value of s2: ";
    getline(cin,s2); // getline picks up the whole string given as input until newline is detected
    cout<<s2;

    //character
    char c1 = 'a';
    cout<<c1;

    return 0;
}