// Functions
#include <vector>
using namespace std;

int dot(vector<int> vec1, vector<int> vec2);
    /* Compute the dot product of two vectors */

bool validate_matricies(vector< vector<int> > lmat, vector< vector<int> > rmat);
    /* Validate the dimensions of two vectors */

vector< vector<int> > matmul(vector< vector<int> > lmat,
                             vector< vector<int> > rmat);
    /* Calculate the product of two products */

void print_mat(vector< vector<int> > mat);
    /* Print a matrix */