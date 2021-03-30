#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <vector>
#include <cassert>
#include <set>

using namespace std;

int minimum_index(vector<int> seq) {
    if (seq.empty()) {
        throw invalid_argument("Cannot get the minimum value index from an empty sequence");
    }
    int min_idx = 0;
    for (int i = 1; i < seq.size(); ++i) {
        if (seq[i] < seq[min_idx]) {
            min_idx = i;
        }
    }
    return min_idx;
}

class TestDataEmptyArray {
public:
    static vector<int> get_array() {
        // complete this function
          std::cout << "7 5" << std::endl;
    std::cout << "0 0 -3 -7 1 4 8" << std::endl;
    }

};

class TestDataUniqueValues {
public:
    static vector<int> get_array() {
        // complete this function
        std::cout << "3 2" << std::endl;
    std::cout << "-1 2 0" << std::endl;
    }

    static int get_expected_result() {
        // complete this function
        std::cout << "5 4" << std::endl;
    std::cout << "0 2 -3 -1 8" << std::endl;

    }

};

class TestDataExactlyTwoDifferentMinimums {
public:
    static vector<int> get_array() {
        // complete this function
         std::cout << "4 2" << std::endl;
    std::cout << "0 2 -3 1" << std::endl;

    }

    static int get_expected_result() {
        // complete this function
         std::cout << "6 5" << std::endl;
    std::cout << "0 0 -3 1 2 -1" << std::endl;
    }

};

