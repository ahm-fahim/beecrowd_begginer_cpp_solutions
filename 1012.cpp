#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

    double a;
    double b;
    double c;

    cin >> a >> b >> c;

    double triangle = (a*c)/2;

    double circle = 3.14159 * (pow(c,2));

    double trapezium = (a+b)/2*c;

    double square = pow(b,2);

    double rectangle = a * b;

    cout << fixed << setprecision(3);

    cout << "TRIANGULO: " << triangle << endl;
    cout << "CIRCULO: "<<circle << endl;
    cout << "TRAPEZIO: "<<trapezium << endl;
    cout << "QUADRADO: "<<square << endl;
    cout << "RETANGULO: "<<rectangle << endl;

    return 0;
}