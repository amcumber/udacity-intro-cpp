#include <iostream>

int main() {
    // TODO: write a program that outputs whether a vehicle is a motorcycle,
    // 2-door coupe, 4-door car or a 5-door mini-van. 
    // You should create a variable that holds the number of doors in the vehicle
    // A motorcycle would have doors = 0 for example. 
    // Then use a switch statement to output to the terminal the kind of vehicle
    // you have
    int doors = 5;

    switch (doors) {
        case 0 :
            std::cout << "You're a motorcycle" << std::endl;
            break;
        case 2 :
            std::cout << "You're a Coupe" << std::endl;
            break;
        case 4 :
            std::cout << "4-door sedan" << std::endl;
            break;
        case 5 :
            std::cout << "5-door" << std::endl;
            break;
    }

    return 0;
}