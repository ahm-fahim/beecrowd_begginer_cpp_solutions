#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double A;
    double B;
    double C;

    cin >> A >> B >> C;

    double  average;

    average = ((A * 2)+(B*3) +(C*5))/(2+3+5);

    cout << fixed << setprecision(1);
    cout << "MEDIA = " << average << endl;

    return 0;
}