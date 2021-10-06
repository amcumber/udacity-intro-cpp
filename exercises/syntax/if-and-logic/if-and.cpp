#include <iostream>

int main() {
    
    /* 
    * TODO: Use this as a playground for writing if, else if and else statements
    * To get you started here, are some ideas:
    * 
    * 1. Create an integer variable and a set of if, elseif and else statements that
    * output whether the number is positive or negative.
    * 
    * 2. Create a character variable containing 'a' for acceleration, 'b' for braking, 
    * 'p' for parked, or 'n' for neutral and outputs whether or not the vehicle is accelerating, braking, 
    * parked or in neutral.
    *
    * Practice Using Boolean Logic
    *
    * You can see an example solution in the solution.cpp file
    */
    int a, b, c;
    float x, y, z;

    x = 10.0;
    y = 20.0;
    z = 10.0;

    a = 1;
    b = 2;
    c = 2;

    if (a < b) {
        std::cout << "a > b" << std::endl;
    } else {
        std::cout << "this won't print" << std::endl;
    }

    if (b != c) {
        std::cout << "this also won't print" << std::endl;
    } else if ( a > c ) {
        std::cout << "still won't print" << std::endl;
    } else {
        std::cout << "ELSE" << std::endl;
    }


    
    return 0;
}
