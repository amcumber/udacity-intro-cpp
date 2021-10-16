#include <iostream>
#include <vector>
#include "matrix.h"

int main()
{

    // TODO: Nothing to do here
    std::vector<std::vector<float>> g1{
        std::vector<float>{1, 2},
        std::vector<float>{3, 4},
        std::vector<float>{5, 6},
    };
    std::vector<std::vector<float>> g2{
        std::vector<float>{9, 8, 7},
        std::vector<float>{7, 6, 5},
    };
    Matrix mat1(g1);
    Matrix mat2(g2);
    Matrix mat3(g2);
    Matrix prodmat = mat1.matrix_multiply(mat2);
    Matrix summat = mat2.matrix_addition(mat3);
    Matrix tmat1 = mat1.matrix_transpose();
    std::cout << "Mat1" << std::endl;
    mat1.matrix_print();

    std::cout << "Prod" << std::endl;
    prodmat.matrix_print();

    std::cout << "Addition" << std::endl;
    summat.matrix_print();

    std::cout << "Transpose" << std::endl;
    tmat1.matrix_print();

    // assign a 7x5 matrix to the variable initial_grid
    // all values in the matrix are 0.4
    std::vector<std::vector<float>>
        initial_grid(7, std::vector<float>(5, 0.4));

    // TODO: Use the initial grid variable to instantiate a matrix object
    // The matrix object should be called matrixa
    Matrix matrixa(initial_grid);
    // TODO: Use the matrix_print() method to print out matrixa
    std::cout << "matrixa\n"
              << std::endl;
    matrixa.matrix_print();

    // TODO: Print out the number of rows in matrixa. You will need
    // to use the getRows() function and std::std::cout
    std::cout << matrixa.getRows() << std::endl;

    // TODO: Print out the number of columns in matrixa
    std::cout << matrixa.getCols() << std::endl;

    // TODO: Take the transpose of matrixa and store the results in
    // a variable called transposea
    Matrix transposea = matrixa.matrix_transpose();

    // TODO: Print out transposea
    std::cout << "transpose\n"
              << std::endl;
    transposea.matrix_print();

    // Now you will use another 7x5 matrix called matrixb to
    // give the results of the matrix_addition function

    // 7x5 2-dimensional vector with values 0.2
    std::vector<std::vector<float>>
        second_grid(7, std::vector<float>(5, 0.2));

    // TODO: Instantiate an object called matrixb. Use the second_grid
    // variable as the input to initialize matrixb
    Matrix matrixb = Matrix(second_grid);

    // TOOD: Add matrixa and matrixb. Store the results in a new matrix
    // variable called matrixsum
    Matrix matrixsum = matrixa.matrix_addition(matrixb);

    // TODO: Print out the matrix contained in the matrixsum variable
    std::cout << "Sum\n"
              << std::endl;
    matrixsum.matrix_print();

    return 0;
}