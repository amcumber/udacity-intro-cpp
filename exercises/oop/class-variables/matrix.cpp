/* TODO: Define the default constructor. Remember the syntax is
**      Classname::ClassName() {
**    
**          initialize variables
**    
**       }
**
**
**      You need to initialize the grid variable to a default value such as
**      a 4x4 matrix with all zeros.
**
**      Then initialize the rows variable, and the cols variable using the
**      vector size method. For example myvector.size() will give the size of
**      a vector. For a 2-dimensional vector, myvector.size() would be the
**      number of rows in a matrix.
**
*/
#include <iostream>
#include <exception>
#include "matrix.h"

Matrix::Matrix()
{
    grid = std::vector<std::vector<float>>(4, std::vector<float>(4, 0));
    rows = grid.size();
    cols = grid[0].size();
}
/* TODO: Define a constructor that receives a 2-Dimensional vector
**       and assigns the vector to the grid variable. 
**       
**      Remember the syntax is
**      Classname::ClassName(datatype inputvariablename) {
**    
**          classvariable = inputvariablename
**    
**       }
**
**      Then initialize the rows variable, and the cols variable exactly
**      as you did for the default constructor.
**
*/

Matrix::Matrix(std::vector<std::vector<float>> mat)
{
    grid = mat;
    rows = mat.size();
    cols = mat[0].size();
}

/*
** TODO: Define a function setGrid()
**   INPUTS: a 2-D vector
**   OUPUTS: void
**
**   This function receives a 2-D vector reprenting a matrix, and then
**    updates the grid, rows, and cols variables
**
*/

/*
** TODO: Define getGrid(), getRows(), and getCols() functions.
**    INPUTS: None of these functions have inputs
**    OUPUTS: Each function should return its respective variable
**            For example, getRows returns the rows variable
*/
void Matrix::setGrid(std::vector<std::vector<float>> mat)
{
    grid = mat;
    rows = mat.size();
    cols = mat[0].size();
}

std::vector<std::vector<float>> Matrix::getGrid()
{
    return grid;
}

std::vector<float>::size_type Matrix::getRows()
{
    return rows;
}

std::vector<float>::size_type Matrix::getCols()
{
    return cols;
}

/* TODO: Define a matrix_addition function
**   INPUT: a matrix
**   OUPUT: the sum of the grid variable and the input matrix
**
** STEPS:
**  1. check that the matrix in the grid variable
**     and the input matrix have the same size
**
**     if not, throw an error like
**         throw std::invalid_argument("matrices are not the same size");
**
** 2. add the matrices together and return
**       the result as a Matrix. You can do this part
**       with nested for loops. If you use an intermediate
**       vector to store a row, the vector.clear() 
**       method might be useful.
**
*/
Matrix Matrix::matrix_addition(Matrix other)
{
    if (other.rows != rows || other.cols != cols)
    {
        throw std::invalid_argument("Matrices are not the same size");
    }
    std::vector<std::vector<float>> new_grid(rows, std::vector<float>(cols, 0.0));
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            new_grid[i][j] = grid[i][j] + other.getGrid()[i][j];
        }
    }
    return Matrix(new_grid);
}

/* TODO: Define a matrix_print function
** This function has no inputs and no outputs
** The purpose of the function is to display the matrix in
** the terminal using std::cout. 
**
**
** The output should look something like:
** 4    9   1   10
** 5    11  6   17
** 8    4   15  2
*/
void Matrix::matrix_print()
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            std::cout << grid[i][j];
            if (j < cols - 1)
            {
                std::cout << "\t";
            }
        }
        std::cout << "\n";
    }
    std::cout << std::endl;
}

Matrix Matrix::matrix_transpose()
{
    std::vector<std::vector<float>> new_grid(cols, std::vector<float>(rows, 0));
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            new_grid[j][i] = grid[i][j];
        }
    }
    return Matrix(new_grid);
}

Matrix Matrix::matrix_multiply(Matrix other)
{
    if (other.cols != rows)
    {
        throw std::invalid_argument("Matrix Mismatch!");
    }
    std::vector<std::vector<float>> new_grid(other.cols, std::vector<float>(rows, 0));
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < other.cols; ++j)
        {
            for (int k = 0; k < cols; ++k)
            {
                new_grid[i][j] += grid[i][k] * other.grid[k][j];
            }
        }
    }
    return Matrix(new_grid);
}