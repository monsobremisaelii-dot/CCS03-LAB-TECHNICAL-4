#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double L1, L2, hypotenuse;

    cout << "Enter First Leg: ";
    cin >> L1;

    cout << "Enter Second Leg: ";
    cin >> L2;

    hypotenuse = sqrt(L1 * L1 + L2 * L2);

    cout << fixed << setprecision(2);
    cout << "The Hypotenuse is: " << hypotenuse << endl;

    return 0;
}
