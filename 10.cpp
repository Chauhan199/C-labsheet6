#include <iostream>
using namespace std;
int main() {
    int n, count=0;
    while (true) {
        cin >> n;
        if (n == 0) break;
        if (n > 0) count++;
    }
    cout << "Total positives = " << count;
    return 0;
}
