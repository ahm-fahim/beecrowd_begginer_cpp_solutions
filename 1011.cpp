#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

    int r;

    cin >> r;

    double result = (4.0/3.0)*(3.14159)*(pow(r,3));

    cout << fixed << setprecision(3);
    cout << "VOLUME = " << result <<endl;

    return 0;
}