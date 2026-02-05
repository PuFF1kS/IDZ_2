#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double A, B, C, R;
    cin >> A >> B >> C >> R;

    const double PI = acos(-1.0);
    double a = 2 * R * sin(A * PI / 180.0);
    double b = 2 * R * sin(B * PI / 180.0);
    double c = 2 * R * sin(C * PI / 180.0);

    cout << fixed << setprecision(2);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}
