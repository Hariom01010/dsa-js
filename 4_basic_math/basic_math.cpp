#include<bits/stdc++.h>
using namespace std;


int digitExtract(int N){
    int count = 0;
        vector<int> num1;
        while(N != 0){
            int a = N % 10;
            num1.emplace_back(a);
            N = N/10;
        }
        
        for(vector<int>::iterator i = num1.begin(); i != num1.end(); i++){
            int num = *(i);
            cout<<num<<" ";
            if(N%num==0){
                cout<<N%num<<endl;
                count = count+1;
            }
        }
        return count;
}

void printVector(vector<int> num1){
    int size = num1.size();
    for(vector<int>::iterator i = num1.begin(); i != num1.end(); i++){
        cout<< *(i)<<" ";
    }
    cout<<endl;
}

int main(){
    // Extraction of Digits
    //    Extraction of digits can be done by first modding then umber with 10
    //    which will give us the last digit and then dividing the number with 10
    //    which will remove the digit we extracted from the number. 
    //    Repeat the steps until you get 0.
    cout<<digitExtract(43728);

    return 0;
}