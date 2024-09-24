#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
using namespace std;

int main() {
    double x, y, R, a, b, maxVal;
    srand((unsigned)time(NULL));

    // Перший спосіб: введення координат вручну
    for (int i = 0; i < 10; i++) {
        cout << "x = "; cin >> x;
        cout << "y = "; cin >> y;
        cout << "R = "; cin >> R;
        cout << "a = "; cin >> a;
        cout << "b = "; cin >> b;

        if (((x >= 0 && x <= a) && (y >= 0 && y <= b) && (x * x + y * y > R * R)) ||
            ((x >= -a && x <= 0) && (y >= -b && y <= 0) && (x * x + y * y <= R * R))) {
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }
    }

    // Другий спосіб: випадкові координати у вказаному інтервалі
    cout << endl << fixed;
    for (int i = 0; i < 10; i++) {

        maxVal = max(max(a, b), R);

        x = maxVal * 2 * rand() / RAND_MAX - maxVal;
        y = maxVal * 2 * rand() / RAND_MAX - maxVal;

        if (((x >= 0 && x <= a) && (y >= 0 && y <= b) && (x * x + y * y > R * R)) ||
            ((x >= -a && x <= 0) && (y >= -b && y <= 0) && (x * x + y * y <= R * R))) {
            cout << setw(8) << setprecision(4) << x << " " << setw(8) << setprecision(4) << y << " yes" << endl;
        }
        else {
            cout << setw(8) << setprecision(4) << x << " " << setw(8) << setprecision(4) << y << " no" << endl;
        }
    }

    return 0;
}

