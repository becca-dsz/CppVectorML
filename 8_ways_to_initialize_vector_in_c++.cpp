#include <bits/stdc++.h>
using namespace std;

int main() {

    
    // We can initialize a vector with the list of values enclosed in curly braces {} known as initializer list
    // The values of the list will be assigned sequentially i.e., 1st value will be assigned to the 1st element of vectcor, 2nd value to 2nd element and so on

    // Initializing std::vector with list of
    // multiple values
    vector<int> v = {11, 23, 45, 89};

    for(auto i : v) {
        cout << i << " ";
    }


    // Vector can be initialized by pushing value one by one
    // In this method, an empty vector is created, and elements are added to it one by one using the vector::push_back() method
    // This method is mostly used to initialize vector after declaration

    // C++ program to initialize std::vector by
    // pushing values one by one

    vector<int> v1;

    // Pushing value one by one
    v1.push_back(11);
    v1.push_back(23);
    v1.push_back(45);
    v1.push_back(89);

    for (auto i : v1) {
        cout << i << " ";
    }


    // We can initialize all the elements of a vector to a single value.
    // We create a vector of a specified size and initialize all elements to the same value using vector constructor

    // C++ program to initialize the std::vector 
    // with specific value

    // Initializing all the elements of a 
    // vector using a single value
    vector<int> v2(5,11);

    for(auto i : v2) {
        cout << i << " ";
    }


    // We can also initialize a vector using plain old static arrays using vector consructor
    // This works by copying all the elements of the array to the newly created vector

    // C++ program to initialize the std::vector
    // from another array

    int arr[] = {11,23,45,89};
    int n = sizeof(arr)/sizeof(arr[0]);

    // Initialize the std::vector v3 by arr
    vector<int> v3 = {arr, arr + n};

    for (auto i : v) {
        cout << i<< " ";
    }


    // We can also initialize a newly created vector from an already created vector if they are of same type

    // C++ program to initialize the std::vector
    // from another vector

    vector<int> v4 = {11,23,45,89};

    // Initialize the vector v5 from vector v4
    vector<int> v5(v4.begin(), v4.end());

    for (auto i : v5) {
        cout << i<< " ";
    }


    // We can also use the std::fill function to initialize the whole or a part of a vector to the same value

    // C++ program to initialize the std::vector
    // using std::fill() method

    vector<int> v6(5);

    // Initialize vector v6 with 11
    fill(v6.begin(), v6.end(), 11);

    for (auto i : v6) {
        cout << i << " ";
    }


    // The std::iota() function from the <numeric> library allows us to initialize a vector with consecutive values starting from the given value.

    // C++ program to initialize the std::vector
    // using std::iota

    vector<int> v7(5);

    // Using std::iota() to initialize vector v7
    // with 11
    iota(v7.begin(),v7.end(),11);

    for (auto i : v7) {
        cout << i << " "; 
    }
    return 0;
}