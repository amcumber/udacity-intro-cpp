#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<int> vector1;
    vector<char> vector2;
    vector<bool> vector3;
    vector<double> myvec (5);

    string stringvar = "beats";
    cout << stringvar << endl;

    myvec[0] = 0.0;
    myvec[1] = 1.0;
    myvec[2] = 2.0;
    myvec[3] = 3.0;
    myvec[4] = 4.0;

    for (int i = 0; i < myvec.size(); i++) {
        cout << myvec[i] << endl;
    }

    return 0;
}