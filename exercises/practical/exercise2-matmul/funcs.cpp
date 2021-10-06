#include <iostream>
#include <vector>
#include "funcs.h"


int dot(vector<int> vec1, vector<int> vec2) {
    // validate dot
    if (vec1.size() != vec2.size()) {
        std::cout << "Size Mismatch vectors must be equal"
        throw -1
    }
    int result = 0;
    for (int i = 0; i < vec1.size(); ++i) {
        result += vec1[i] * vec2[i];
    }
}

bool validate_matricies(vector< vector<int> > lmat,
                        vector< vector<int> > rmat) {
    if (lmat[0].size() != rmat.size()) {
        std::cout << "Matrix Mismatch"
        throw -1
    }
    return true;
}

vector< vector<int> > matmal(
    vector< vector<int> > lmat, vector< vector<int> > rmat) {
    //...
    bool valid = validate_matricies(lmat, rmat);
    vector<int> rcol (rmat.size(), 0);
    vector<int> lrow (lmat[0].size(), 0);
    vector< vector<int> > result (lmat.size(), vector<int> (rmat[0].size(), 0));
    for (int irow = 0; irow < lmat.size(); ++irow) {
        lrow = lmat[irow];
        for (int icol = 0; icol < rmat[0].size(); ++icol) {
            for(int k = 0; k < rmat.size(); ++k){
                rcol[k] = rmat[k][icol];
            }
            result[irow][icol] = dot(lrow, rcol);
        }
    }
    return result;
}

