/*
 * Write a C++ function that takes in two matrices and outputs their product.
 * Your function should first check that the two matrices can actually be
 * multiplied together; if matrix one is m by n and matrix two is w by z, then n
 * must equal w. And the resulting matrix will be m by z.
 */
#include <vector>
#include "funcs.h"

int main() {
    vector < vector<int> > mat1 {
        vector<int> {1, 2, 3},
        vector<int> {4, 5, 6},
    }
    vector < vector<int> > mat2 {
        vector<int> {9, 8, 7, 6},
        vector<int> {7, 6, 5, 4},
        vector<int> {5, 4, 3, 2},
    }
    return 0;
}
