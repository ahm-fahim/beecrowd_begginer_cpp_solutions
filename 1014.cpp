#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int X;
    double Y;

    cin >> X >> Y;

    double result;

    if(X > 0 && Y > 0){
        result = X / Y;
        cout <<fixed << setprecision(3);
        cout << result << " km/l" <<endl;
    }

    return 0;
}