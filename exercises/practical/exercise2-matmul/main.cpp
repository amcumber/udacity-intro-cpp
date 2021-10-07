/*
 * Write a C++ function that takes in two matrices and outputs their product.
 * Your function should first check that the two matrices can actually be
 * multiplied together; if matrix one is m by n and matrix two is w by z, then n
 * must equal w. And the resulting matrix will be m by z.
 */
#include <iostream>
#include <vector>
#include "funcs.h"
#include "funcs.cpp"
using namespace std;

int main()
{
    vector<vector<int>> mat1{
        vector<int>{1, 2, 3},
        vector<int>{4, 5, 6},
    };
    vector<vector<int>> mat2{
        vector<int>{9, 8, 7, 6},
        vector<int>{7, 6, 5, 4},
        vector<int>{5, 4, 3, 2},
    };
    vector<int> vec1 = {1, 2, 3};
    vector<int> vec2 = {4, 5, 6};
    vector<vector<int>> result(2, vector<int>(4));

    cout << "test" << endl;
    print_mat(mat1);
    print_mat(mat2);

    // result = matmul(mat1, mat2);
    // print_mat(result);
    int vec_result = dot(vec1, vec2);
    cout << vec_result << endl;

    return 0;
}
