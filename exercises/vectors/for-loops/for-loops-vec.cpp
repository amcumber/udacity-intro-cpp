//TODO: include the iostream and vector libraries
#include <iostream>
#include <string>
#include <vector>

//TODO: Use the standard namespace
using namespace std;

void print_vector(vector<double> vec);

int main() {
    
    // Part 1: declare and define a vector with values
    //        {5.0, 5.0, 5.0} and print 
    //         the vector to the terminal using cout
    // Hint: the syntax vector<datatype> varname(length, value) might help
    string myfirst = "First Vector...\n";

    cout << myfirst;

    vector<double> vec(3, 5.0);

    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << " ";
    }
    cout << endl;

    // Part 2: Use push back to add the values 3.0, 2.5, 1.4 
    //      to the back of the vector
    vec.push_back(3.0);
    vec.push_back(2.5);
    vec.push_back(1.4);

    // Part 3: Print out the vector again using cout
    string mystr = "Second Vector...";
    cout << mystr << endl;
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << " ";
    }
    cout << endl;

    cout << "Using Function...." << endl;
    print_vector(vec);


    // Part 4: Use the vector assign method to override the current vector. 
    // The overriden vector should have 3 elements with 
    // the values {5.0, 5.0, 5.0}
    vec.assign(3, 5.0);

    cout << "newly assigned vector:\n";
    print_vector(vec);

    // Part 5: Print out the vector

    return 0;
}

void print_vector(vector<double> vec) {
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i];
        if (i < vec.size() - 1) {
            cout << ", ";
        }
    }
    cout << endl;
}