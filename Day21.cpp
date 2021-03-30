#include <iostream>
#include <vector>
#include <string>

using namespace std;

/**
*    Name: printArray
*    Print each element of the generic vector on a new line. Do not return anything.
*    @param A generic vector
**/

// Write your code here
template <typename t>
void printArray (vector<t> v_) {
    for (auto &element : v_) {
        cout << element << endl;
    }
}

int main() {
