#include <iostream>
using namespace std;

class Shape {
    float radius, length, width;

public:
    Shape(float r, float l, float w) {
        radius = r;
        length = l;
        width = w;
    }

    void calculate() {
        float cperimeter, operimeter;

        cperimeter = 2 * 3.14 * radius;
        operimeter = 2 * (length + width);

        cout << "Perimeter of circle: " << cperimeter << endl;
        cout << "Perimeter of rectangle: " << operimeter << endl;
    }
};

int main() {
    float r, l, w;

    cout << "Radius of circle: ";
    cin >> r;

    cout << "Length of rectangle: ";
    cin >> l;

    cout << "Width of rectangle: ";
    cin >> w;

    Shape s(r, l, w);

    s.calculate();

    return 0;
}