//TODO: Write a function that receives two integer matrices and outputs
// the sum of the two matrices. Then in your main() function, input a few
// examples to check your solution. Output the results of your function to 
// cout. You could even write a separate function that prints an arbitrarily 
// sized matric to cout.
#include <vector>
#include <iostream>

using namespace std;

vector < vector<int> > mat_add(
    vector< vector<int> > matA, vector< vector<int> > matB
);
void print_mat(vector< vector<int> > mat);

int main() {
    vector < vector<int> > mat1 (5, vector<int> (3));
    vector < vector<int> > mat2 (5, vector<int> (3));
    vector < vector<int> > mat3 (5, vector<int> (3));

    mat1[0] = (vector<int> {1, 2, 3});
    mat1[1] = (vector<int> {4, 5, 6});
    mat1[2] = (vector<int> {7, 8, 9});
    mat1[3] = (vector<int> {0, 1, 2});
    mat1[4] = (vector<int> {3, 4, 5});

    mat2[0] = (vector<int> {3, 1, 2});
    mat2[1] = (vector<int> {6, 4, 5});
    mat2[2] = (vector<int> {9, 7, 8});
    mat2[3] = (vector<int> {2, 0, 1});
    mat2[4] = (vector<int> {5, 3, 4});

    mat3 = mat_add(mat1, mat2);
    print_mat(mat3);
    return 0;
}

vector < vector<int> > mat_add(
    vector< vector<int> > matA, vector< vector<int> > matB
) {
    vector< vector<int> > matC (matA.size(), vector<int> (matA[0].size()));

    for (int row = 0; row < matA.size(); ++row) {
        for (int col = 0; col < matA[0].size(); ++col) {

            matC[row][col] = matA[row][col] + matB[row][col];

        }
    }
    return matC;
}

void print_mat(vector< vector<int> > mat) {
    for (int row=0; row < mat.size(); ++row) {
        for (int col = 0; col < mat[0].size(); ++col) {
            cout << mat[row][col] << "\t";
        }
        cout << endl;
    }
}