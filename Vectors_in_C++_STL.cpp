#include <bits/stdc++.h>
using namespace std;


// We can also provide the values to be stored in the vector inside {} curly braces
// This process is called initialization

void printVector(vector<int>& v) {
    for (auto x : v) {
        cout << x << " ";
    }
    cout << endl;
}


int main() {


    // Creating an instance of std::vector class
    // This requires us to provide the type of elements as template parameter.

    // Creating an empty vector
    vector<int> v;


    //Creating a vector of 5 elements from
    // initializer list
    vector<int>  v1 = {1,4,2,3,5};

    // Creating a vector of 5 elements with
    // default value
    vector<int> v2(5,9);

    printVector(v1);
    printVector(v2);


    // An element can be inserted into a vector using vector insert() method which takes linear time
    // But for the insertion at the end, the vector push_back() method can be used
    // It is much faster, taking only constant time

    vector<char> v3 = {'a','f','d'};

    // Inserting 'z' at the back
    v3.push_back('z');

    // Inserting 'c' at index 1
    v3.insert(v3.begin() + 1, 'c');

    for (int i=0; i<v3.size(); i++) {
        cout << v3[i] << " ";
    }


    // Just like arrays, vector elements can be accessed using their indexinside  the [] subscript operator
    // While accessing elements, we can also update the value of that index using assignment operator =
    // The [] subscript operator doesnt check whether the given index exists in the vector or not
    // So, there is another member method vector at() for safely accessing or updating elements

    vector<char> v4 = {'a','c','f','d','z'};

    // Accessing and printing values
    cout << v4[3] << endl;
    cout << v4.at(2) << endl;

    // Updating values using indexes 3 and 2
    v4[3] = 'D';
    v4.at(2) = 'F';

    cout << v4[3] << endl;
    cout << v4.at(2);


    // One of the common problems with arrays was to keep a separate variable to store the size information
    // Vector provides the solution to this problem by providing size() method

    vector<char> v5 = {'a','c','f','d','z'};

    // FInding size
    cout << v5.size();


    // Vectors in C++ can be traversed using indexes in a loop
    // The indexes start from 0 and go up to vector size -1
    // To iterate through this range, we can use a loop and deterine the size of a vector using the vector size() method

    vector<char> v6 = {'a','c','f','d','z'};

    // Traversing vector using range based for loop
    for (int i=0; i<v6.size(); i++) {
        cout << v6[i] << " ";
    }


    // For deletion at the end, the vector pop back() method an be used, and it is much faster, taking only constant time

    vector<char> v7 = {'a','c','f','d','z'};

    // Deleting last element 'z'
    v7.pop_back();

    //Deleting element 'f'
    v7.erase(find(v7.begin(),v7.end(), 'f'));

    for(int i=0; i < v7.size(); i++) {
        cout << v7[i] << " ";
    }


    return 0;
}

