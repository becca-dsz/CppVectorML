#include <bits/stdc++.h>
using namespace std;

int main() {


    // In C++, the vector end() is a built-in method used to obtain an iterator pointing to the theoretical element after the last element of the vector
    // Even though this iterator does not point to a valid element, it serves as a marker for the end of the vector

    vector<int> v = {1,3,5,2,4};

    // Printing last element using vector end
    cout << *(--v.end());


    // The vector end() function is sued in conjunction with vector begin() function to basically perform various operations on the vector using iterators
    
    vector<int> v1 = {1,3,5,2,4};

    // Use end() to iterate through the vector
    for (auto it = v1.begin(); it!= v1.end(); ++it) {
        cout << *it << " ";
    }


    // Access Nth Last Element of Vector

    vector<int> v2 = {1,3,5,2,4};
    int n = 2;

    // Access 2nd element from last
    cout << *(v2.end() - n);


    // Apply sort algorithm

    vector<int> v3 = {1,3,5,2,4};

    // Sort vector v using sort()
    sort(v.begin(), v.end());

    for (auto i: v) {
        cout << i << " ";
    }

    
    return 0;
}