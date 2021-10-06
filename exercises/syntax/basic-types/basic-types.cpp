#include <iostream>

int main () {
    
    // TODO: define two floating point numbers. Assign 12.07 to the
    // first floating point number. Assign 65.102 to the 
    // second floating point number.
    float x = 12.07;
    float y = 65.102;
    
    
    // TODO: Calculate the sum of the two floating point variables into
    // the float_sum variable.
    float float_sum = x + y;
    
    std::cout << float_sum << std::endl;
    
    // TODO: Calculate difference between the second and first number
    // output the results to cout. 
    float difference = y - x;

    std::cout << difference << std::endl;
        
    // TODO: Calculate second_float / first_float and output the results
    // to cout.
    float divided = y / x;

    std::cout << divided << std::endl;
    
    // TODO: Calculate the product of the two numbers and output the results
    // to cout.
    float product = y * x;

    std::cout << product << std::endl;

    return 0;
}