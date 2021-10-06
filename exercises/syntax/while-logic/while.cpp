#include <iostream>

int main() {
        
    //TODO: Use this as a playground to write a for loop and if statements
    // in the same program.
    
    // For example, write a for loop that iterates from 0 to 80.
    // If the iterator is greater than or equal to 0 but less than 10, 
    //      output the phrase 'slow'
    // If the iterator is between 10 inclusive
    //      and less than 30, output the phrase 'medium'
    // If the iterator is between 30 inclusive and 70, output the phrase 'fast'
    // If the iterator is greater than 70 inclusive, output the phrase 'too fast'
    int i = 0;

    std::cout << "j: ";
    for (int j = 0; j < 10; j++) {
        std::cout << j << " , ";
    }
    std::cout << std::endl;

    std::cout << "i: ";

    while (i < 10) {
        std::cout << i << " , ";
        i++;
    }
    std::cout << std::endl;
    
    return 0;
}