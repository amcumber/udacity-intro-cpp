#include <vector>
#include <iostream>
#include "funcs.cpp"

using namespace std;

int main() {
    // Idea 1
    vector<int> vec1 = {5, 10, 27};
    // vec1[0] = 5; vec1[1] = 10; vec1[2] = 27;
    vector<int> vec2;
    vector<int> sub_vec(3);
    vec2.push_back(3);
    vec2.push_back(17);
    vec2.push_back(12);

    sub_vec = sloppy_subtract(vec1, vec2);

    print_vector(sub_vec);

    // Idea 2
    vector<int> mul_vec(5);
    vector<int> vec3(5);
    vec3[0] = 17;
    vec3[1] = 10;
    vec3[2] = 31;
    vec3[3] = 5;
    vec3[4] = 7;

    vector<int> vec4 = {3, 1, 6, 19, 8};

    mul_vec = sloppy_multiply(vec3, vec4);

    print_vector(mul_vec);

    return 0;
}