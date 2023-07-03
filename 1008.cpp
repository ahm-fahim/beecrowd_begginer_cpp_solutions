#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int a ;
    int b;
    double c;
    double d;

    cin >>a >>b >> c;

    d = b*c;

    cout << fixed << setprecision(2);

    cout << "NUMBER = " << a << endl;
    cout << "SALARY = U$ " << d <<endl;

    return 0;
}