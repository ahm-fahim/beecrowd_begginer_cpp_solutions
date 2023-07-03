#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    string c;
    double a,b;
    cin >> c;
    cin >> a >> b;

    double total = a + ((b*15)/100);

    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << total << endl;

    return 0;
}