#include <iostream>
#include <vector>
#include "funcs.h"

using namespace std;

vector<int> sloppy_subtract(vector<int> vec1, vector<int> vec2) {
    // Dynamic?
    vector<int> resultant(vec1.size());

    for (int i = 0; i < vec1.size(); ++i) {
        resultant[i] = vec1[i] - vec2[i];
    }

    return resultant;
}

vector<int> sloppy_multiply(vector<int> vec1, vector<int> vec2) {
    // another approach
    vector<int> resultant;
    int ele_val;

    for (int i = 0; i < vec1.size(); ++i) {
        ele_val = vec1[i] * vec2[i];
        resultant.push_back(ele_val);
    }

    return resultant;
}

void print_vector(vector<int> vec) {
    cout << "Vector:\n";
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i];
        if (i < vec.size() - 1) {
            cout << ", ";
        }
    }
    cout << endl;
}