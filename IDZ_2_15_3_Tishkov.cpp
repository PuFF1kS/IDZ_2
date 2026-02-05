#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
using namespace std;

double dist(double x1, double y1, double x2, double y2) {
    return sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
}

int main() {
    ifstream fin("in3.dat");
    if (!fin) return 0;

    double xa, ya, xb, yb, xc, yc, xd, yd;
    fin >> xa >> ya >> xb >> yb >> xc >> yc >> xd >> yd;

    cout << fixed << setprecision(2);
    cout << "A(" << xa << ", " << ya << ")" << endl;
    cout << "B(" << xb << ", " << yb << ")" << endl;
    cout << "C(" << xc << ", " << yc << ")" << endl;
    cout << "D(" << xd << ", " << yd << ")" << endl;

    double L = dist(xa, ya, xb, yb) + dist(xb, yb, xc, yc) +
               dist(xc, yc, xd, yd) + dist(xd, yd, xa, ya);

    ofstream fout("out3.dat");
    fout << fixed << setprecision(2);
    fout << "Длина ломаной ABCDA = " << L << endl;

    return 0;
}