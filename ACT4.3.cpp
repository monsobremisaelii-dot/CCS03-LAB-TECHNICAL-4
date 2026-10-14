#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    const double pi = 3.14;
    double a, b, angleC, radians, c;

    cout << "Enter side a: ";
    cin >> a;

    cout << "Enter side b: ";
    cin >> b;

    cout << "Enter angle C (in degrees): ";
    cin >> angleC;

    radians = angleC * (pi / 180.0);
    c = sqrt(a * a + b * b - 2 * a * b * cos(radians));

    cout << fixed << setprecision(2);
    cout << "Side C: " << c << endl;

    return 0;
}
