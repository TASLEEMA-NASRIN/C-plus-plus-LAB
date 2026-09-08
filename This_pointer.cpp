#include <iostream>
using namespace std;

class Demo {
public:
    void showAddress() {
        cout << "Address stored in this pointer: " << this << endl;
    }
};

int main() {
    Demo d;

    cout << "Address of object d: " << &d << endl;

    d.showAddress();

    return 0;
}