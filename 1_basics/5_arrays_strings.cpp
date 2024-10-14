#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5];
    cout<<"enter values: ";
    // cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    // cout<<arr[0]<<arr[1]<<arr[2]<<arr[3]<<arr[4];

    // 2D Array
    int arr2[3][5];
    arr2[1][3] = 76;
    cout<<arr2[1][3]<<endl;

    // Strings
    string s = "Striver";
    cout<<s[1]<<endl;
    int len = s.size();
    cout<<len<<endl;
    cout<<s[len-1]<<endl;
    s[len-1] = 'z';
    cout<<s;
    return 0;
}