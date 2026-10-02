#include <iostream>
using namespace std;
int main() {
    int n, a=0, b=1, c, i=3;
    cout << "Enter number of terms: ";
    cin >> n;
    cout << a << " " << b << " ";
    while (i <= n) {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
        i++;
    }
    return 0;
}
