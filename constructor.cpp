#include <iostream>
using namespace std;

class Semicircle {
private:
    int x;

public:
    // Parameterized constructor
    Semicircle(int x) {
        this->x = x;
    }

    void area() {
        float area;
        area = 3.14 * x * x * 0.5;
        cout << "Area of the semicircle: " << area << endl;
    }

    void perimeter() {
        float perimeter;
        perimeter = 3.14 * x;
        cout << "Perimeter of semicircle: " << perimeter << endl;
    }
};

int main() {
    Semicircle s1(5);

    s1.area();
    s1.perimeter();

    return 0;
}