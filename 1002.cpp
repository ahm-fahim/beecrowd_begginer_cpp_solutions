#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
int main() {
    double R, A;
    cin >> R;

    A = 3.14159 * pow(R, 2);

    cout << fixed << setprecision(4);
    cout << "A=" << A << endl;

    return 0;
}