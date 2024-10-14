#include<bits/stdc++.h>
using namespace std;


// pairs
void explainPair(){
    pair<int, int> p = {1,3};
    cout<< p.first<< " "<< p.second<<endl;

    pair<int, pair<int,int>> p2 = {1, {2, 3}};
    cout << p.first << " " <<" "<< p2.second.first << ' ' << p2.second.second<<endl;

    pair<int, int> arr[] = { {1,2}, {3,4}, {5,6}};
    cout<<arr[1].first<<" "<<arr[1].second<<endl;
}


// vectors
void explainVectors(){
    // creating vectors

    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>> v2;

    v2.push_back({1,2});
    v2.emplace_back(3,4);

    vector<int> v3(5,100);

    vector<int> v4(5);

    vector<int> v6(v3);

    // printing vectors
    vector<int> v7(5,200);
    cout<< v7[0];
    cout<<v7.back();

    //vector<int>::iterator it = v7.begin(); // creating an iterator which points to the beginning memory address
    //it++;   
    //cout<<" "<<*it; // printing the value at memory address

    //vector<int>::iterator it = v7.end(); // uses one memory after the last memory address so be careful //
    // vector<int>::iterator it = v7.rend(); // used in reverse order
    // vector<int>::iterator it = v7.rbegin();

    for(vector<int>::iterator it = v7.begin(); it != v.end(); it++){
        cout<< *(it)<<" ";
    }

    // alternative method 
    // auto = auto autmatically assigns it to the vector iterator
    for(auto it = v7.begin(); it != v.end(); it++){
        cout<< *(it)<<" ";
    }


    // deleting a vector
    v7.erase(v.begin()+1);  // deletes the second memory address value

    v7.erase(v.begin()+2,v.begin()+4);  // deletes the range from start to end-1


    // Insert function
    vector<int> v8(3,100);
    v8.insert(v.begin(),150);

    v8.insert(v.begin()+1,2,5); //inserts 2 copies of 5 at v.begin()+1

    vector<int> copy(2,50);
    v8.insert(v8.begin(),copy.begin(),copy.end());

    v8.size(); //return the size of vector
    v8.pop_back();  // removes last element
    v7.swap(v8); // swaps two vectors
    v8.clear(); // clears the entire vector
    v8.empty(); // tells whethere an vector is empty or not
}



void explainLists(){
    list<int> l1;

    l1.push_back(2);    // {2}
    l1.emplace_back(4); // {2,4}

    l1.push_front(5);   // {5,2,4}
    l1.emplace_front(1); // [1,5,2,4]

    for(list<int>::iterator it = l1.begin(); it!= l1.end(); it++){
        cout<<*(it)<<" ";
    }

    // rest functions are same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}



void explainDeque(){
    deque<int>dq;
    
    dq.push_back(1); // {1}
    dq.emplace_back(2); // {1,2}
    dq.push_front(3); //{3,1,2}
    dq.emplace_front(4); //{4,3,1,2}

    dq.pop_back(); // {4,3,1}
    dq.pop_front(); // {3,1}

    dq.back();  //{1}
    dq.front(); //{3}

    //rest function same as vector
    // begin, end, rbegin, rend, swap, insert, size
}



void explainStack(){
    stack<int> s1;

    s1.push(1); // {1}
    s1.push(2); // {2,1}
    s1.push(3); // {3,2,1}
    s1.push(3); // {3,3,2,1}
    s1.emplace(5); // {5,3,3,2,1}

    cout<<s1.top(); // print 5 "**  st[2] is invalid  **"

    s1.pop(); // s1 look like {3,3,2,1}

    cout<< s1.top(); // 3
    cout<< s1.size(); // 4
    cout<< s1.empty();

    stack<int> s2,s3;
    s2.swap(s3);

    // push, pop, top are O(1) time complexity
}



void explainQueue(){
    queue<int> q1;

    q1.push(1); // {1}
    q1.push(2); // {1,2}
    q1.emplace(3);   // {1,2,3}

    q1.back();  // 3
    q1.back() += 5;
    q1.back(); // 8

    q1.front(); // 1

    q1.pop(); // {2,3}
    q1.front(); // {2}

    // size, swap, empty function same as stack
}



void explainPQ(){
    // Maximum Heap: priority_queue where larget element stays at the top
    // priority_queue maintains a tree DS inside it so element will be placed according to its precendence.
    // For eg: if we insert 4 in {9,6,2,1} then it will become {9,6,4,2,1}

    priority_queue<int>pq1; 

    pq1.push(1);    // {1}
    pq1.push(2);    // {1,2}
    pq1.push(5);    // {5,1,2}
    pq1.emplace(10);    // {10,5,1,2}

    cout<<pq1.top();    // prints 10

    pq1.pop();  // {5,1,2}
    cout<<pq1.top();    //(5)

    // size swap empty function same as others


    // Minimum Heap: priority_queue where stores minimum element at top
    priority_queue<int, vector<int>, greater<int>> pq2;

    pq2.push(5); // {5}
    pq2.push(2);    // {2,5}
    pq2.push(8);    // {2,5,8}
    pq2.emplace(10); // {2,5,8,10}

    cout<<pq2.top();    // 2

    //push, pop have O(log n) time complexity whereas top has O(1) time complexity
}



void explainSet(){
    // Set: Stores in sorted and unique element
    set<int> s1;

    s1.insert(1);   // {1}
    s1.insert(2);   // {1,2}
    s1.emplace(2);  // {1,2}
    s1.insert(4);   // {1,2,4}
    s1.insert(3);   // {1,2,3,4}

    // FUncitonality of insert in vector can be used also, that only increases efficiency

    // begin, end, rend, rbegin, size, empty and swap are same as those of above

    //  {1, 2, 3, 4, 5}
    auto it = s1.find(3);

    // {1, 2, 3, 4, 5}
    auto it2 = s1.find(6);

    // {1,4,5}
    s1.erase(5);    // erases 5, takes logarithmic time

    int cnt = s1.count(3); // return 1 or 0 acc to if the key given is present or not in set

    auto it = s1.find(3);
    s1.erase(it);   // it takes constant time

    // {1, 2, 3, 4, 5}
    auto it1 = s1.find(2);
    auto it2 = s1.find(4);
    s1.erase(it1,it2);   // after erase, {1,4,5}

    // size swap empty function works same as in others

    // lower_bound() & upper_bound() function works in the same as in vector
    // lower_bound: returns the iterator pointing to the key or the next element present or the end() if element not present
    // upper_bound: returns the iterator pointing to the next element to the key, or the end() if element not present

    auto it = s1.lower_bound(3);
    auto it = s1.upper_bound(2);

    // everything in set happens in O(log n) time complexity.
}



void explainMultiSet(){
    // everything same as set but also stores duplicates element also

    multiset<int> ms1;
    ms1.insert(1);    // {1}
    ms1.insert(1);   // {1,1}
    ms1.insert(1);  // {1,1,1}

    ms1.erase(1);   // {} all 1's erased

    int cnt = ms1.count(1);  // count number of 1s in the multiset

    ms1.erase(ms1.find(1)); // only a single one erased

    ms1.erase(ms1.find(1), ms1.find(1)+1);

    //rest all function same as set
}



void explainUSet(){
    unordered_set<int> us1;
    //lower_bound and upper_bound function does not work, rest all function same
    //does not store in any particular order, has better complexity than set in most case, except some when collision happens

    // has O(1) time complexity but in worst case becomes O(n)
}



void explainMap(){
    // stores data in form of key:value pair. key, value can be any DS

    map<int, int> m1;
    map<int , pair<int, int>> m2;
    map<pair<int, int>, int> m3;

    m1[1] = 2;
    m1.insert({3,1});
    m1.emplace({2,5});
    
}



int main(){
    explainLists();
    return 0;
}