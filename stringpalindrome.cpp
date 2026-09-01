#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int i, j;
    bool palindrome = true;

    cout << "Enter a string: ";
    cin >> str;

    i = 0;
    j = str.length() - 1;

    while (i < j) {
        if (str[i] != str[j]) {
            palindrome = false;
            break;
        }

        i++;
        j--;
    }

    if (palindrome)
        cout << "Palindrome";
    else
        cout << "Not a palindrome";

    return 0;
}