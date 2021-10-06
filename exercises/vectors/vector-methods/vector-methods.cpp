#include <vector>
#include <iostream>

using namespace std;

int main() {
    // assign
    vector<int> intvariable;

    intvariable.assign(10, 16);

    //push_back
    vector<int> othervar;

    othervar.push_back(25);
    othervar.push_back(2);
    othervar.push_back(9);

    //size
    cout << othervar.size() << endl;

    cout << intvariable.size() << endl;


    return 0;
}