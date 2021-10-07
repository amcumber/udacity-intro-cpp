#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<double> sense(vector<double> p, string Z);
vector<double> move(vector<double> p, int U);

int main() {
    vector<double> p(5, 0.2);
    vector<string> measurements {"red", "green"};
    vector<int> motions(2, 1);

    for (int k = 0; k < measurements.size(); ++k) {
        p = sense(p, measurements[k]);
        p = move(p, motions[k]);
    }
    for (int i = 0; i < p.size(); ++i){
        cout << p[i];
        if (i < p.size() - 1) {
            cout << "\t";
        }
        cout << endl;
    }
    cout << "test\n" << true - 1;

    return 0;
}

vector<double> sense(vector<double> p, string Z) {
    vector<string> world {"green", "red", "red", "green", "green"};
    double pHit = 0.6;
    double pMiss = 0.2;
    vector<double> q;
    double s = 0.0;
    for (int i = 0; i < p.size(); ++i) {
        bool hit = (Z == world[i]);
        q.push_back(p[i] * (hit * pHit + (1-hit) * pMiss));
        s += q[i];
    }
    for (int i = 0; i < q.size(); ++i) {
        q[i] = q[i] / s;
    }
    return q;
}
vector<double> move(vector<double> p, int U) {
    double pExact = 0.8;
    double pOvershoot = 0.1;
    double pUndershoot = 0.1;
    vector<double> q;
    
    for (int i = 0; i < p.size(); ++i) {
        double s = pExact * p[(i-U) % p.size()];
        s += pOvershoot * p[(i-U-1) % p.size()];
        s += pUndershoot * p[(i-U+1) % p.size()];
        q.push_back(s);
    }
    return q;
}