#include <bits/stdc++.h>
using namespace std;

int main() {
    double L1 = 10.0;
    double L2 = 5.0;
    double cos1 = 0.866;
    double sin1 = 0.5;
    double cos12 = 0.766;
    double sin12 = 0.643;

    double x = (L1 * cos1) + (L2 * cos12);
    double y = (L1 * sin1) + (L2 * sin12);

    cout << "X = " << x << " cm" << endl;
    cout << "Y = " << y << " cm" << endl;
    return 0;
}
