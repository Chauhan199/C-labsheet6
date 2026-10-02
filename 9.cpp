#include <iostream>
using namespace std;
int main() {
    int ch;
    cout << "Enter 1 or 2: ";
    cin >> ch;
    switch (ch) {
        case 1: cout << "One"; break;
        case 2: cout << "Two"; break;
        default: cout << "No match!";
    }
    return 0;
}
