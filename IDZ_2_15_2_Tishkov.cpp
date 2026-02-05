#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    ifstream fin("in2.dat");
    if (!fin) return 0;

    double a;
    fin >> a;

    double a2 = a * a;
    double a3 = a2 * a;
    double a5 = a3 * a2;
    double a10 = a5 * a5;

    cout << fixed << setprecision(2);
    cout << "a = " << a << endl;
    cout << "a^3 = " << a3 << endl;
    cout << "a^10 = " << a10 << endl;

    return 0;
}
