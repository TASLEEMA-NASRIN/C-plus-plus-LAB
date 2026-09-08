#include <iostream>
using namespace std;

class Complex {
public:
    int r, i;

    inline void addition(Complex c) {
        cout << "Addition = " << r + c.r << " + "
             << i + c.i << "i" << endl;
    }

    inline void multiplication(Complex c) {
        cout << "Multiplication = "
             << r * c.r - i * c.i << " + "
             << r * c.i + i * c.r << "i" << endl;
    }
};

int main() {
    Complex c1, c2;

    cout << "Enter first complex number: ";
    cin >> c1.r >> c1.i;

    cout << "Enter second complex number: ";
    cin >> c2.r >> c2.i;

    c1.addition(c2);
    c1.multiplication(c2);

    return 0;
}