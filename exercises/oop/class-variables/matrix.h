#ifndef MATRIX_H
#define MATRIX_H
#include <vector>

// Header file for the Matrix class

/* 
**  TODO:
**    Declare the following private variables:
**      a 2D float vector variable called grid
**      a vector size_type variable called rows
**      a vector size_type variable called cols
*/

class Matrix
{
private:
    std::vector<float>::size_type rows, cols;
    std::vector<std::vector<float>> grid;

    /* 
    ** TODO: Declare  constructor functions
    ** For the matrix class, you will need two constructor functions.
    ** 1. An empty constructor function
    ** 2. A constructor function that accepts a 2-dimensional vector
    */
public:
    Matrix();
    Matrix(std::vector<std::vector<float>>);

    /*
    ** TODO: Declare set and get functions for the three private variables.
    ** You will need 1 set function and 3 get functions.
    ** The names of these functions should be setGrid, getGrid, getRows, 
    ** and getCols.
    **
    ** The setGrid does not return anything and has a 2-D vector input
    ** getGrid returns a 2-D vector and has no input
    ** getRows returns a size_type and has no input
    ** get Cols returns a size_type and has no input
    */
    void setGrid(std::vector<std::vector<float>>);
    std::vector<std::vector<float>> getGrid();
    std::vector<float>::size_type getRows();
    std::vector<float>::size_type getCols();

    /*
    ** TODO: Declare the matrix functions. In a following exercise, you
    ** will program matrix_transpose, matrix_addition and matrix_print
    ** functions. So you will need to declare these two functions.
    ** 
    ** matrix_transpose has no input and outputs a 2D vector
    ** matrix_addition receives a Matrix and outputs a 2D vector
    ** matrix_print has no inputs and no outputs
    */

    // std::vector<std::vector<float>> matrix_transpose();
    // std::vector<std::vector<float>> matrix_addition(Matrix);
    void matrix_print();

    /* TODO: Declare the matrix_addition function
    ** INPUTS: a Matrix
    ** OUTPUTS: a Matrix
    **
    ** TODO: Declare the matrix_print function
    ** INPUTS: none
    ** OUTPUTS: none
    * 11 12      11 12 13 14 = 11*11+12*21 11*12+12*22 11*13+12*23
    * 21 22   x  21 22 23 24
    * 31 32
    */

    Matrix matrix_addition(Matrix);
    Matrix matrix_transpose();
    Matrix matrix_multiply(Matrix);
};

#endif /* MATRIX_H */
