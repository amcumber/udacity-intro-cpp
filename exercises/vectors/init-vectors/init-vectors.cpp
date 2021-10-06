#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<int> myvector (10, 2);
    vector<double> myothervector = {5.0, 2.0, 1.0, 2.5, 7.9};
    vector<float> myfloatvec = {4.5, 2.1, 8.54, 9.0};
    vector<float> myotherfloatvec (4, 3.5);
    vector<float> mylastvec (4);

    mylastvec[0] = 1.2;
    mylastvec[1] = 2.3;
    mylastvec[2] = 3.4;
    mylastvec[3] = 4.5;


    return 0;
}