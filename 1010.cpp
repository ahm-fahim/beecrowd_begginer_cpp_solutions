#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int p_code1 ;
    int p_code2 ;

    int num_of_p1;
    int num_of_p2;

    double price1;
    double price2;

    cin>> p_code1 >> num_of_p1 >> price1;
    cin>> p_code2 >> num_of_p2 >> price2;

    double total_price = (price1 * num_of_p1) + (price2 * num_of_p2);

    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << total_price << endl;

    return 0;
}