#include<bits/stdc++.h>
using namespace std;


// 1. Sum of 1 to N
// Parameterised Way: We use parameters in such a way that we recursively call the function
void sumNum(int i,int n){
    if(i<1){
        cout<<n<<endl;
        return;
    }else{
        sumNum(i-1,n+i);
    }
}

// Function Way: We don't use multiple parameters we use the function in such a way that it recursively calls itself to give us output
long long sumNum2(long long n){
    if(n == 0){
        return 0;
    }else{
        return (pow(n,3))+sumNum2(n-1);
    }
}

// Factorial of a number
int factorialNum(int n){
    if(n==1){
        return 1;
    }else{
        return n*factorialNum(n-1);
    }
}

int main(){
    // sumNum(3,0);

    // cout<<sumNum2(26501);
    
    cout<<factorialNum(4);
    return 0;
}