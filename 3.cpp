#include <iostream>
using namespace std;
int main() {
    int arr[5] = {2, 4, 6, 8, 10}, n;
    cout << "Enter number to search: ";
    cin >> n;
    for (int i=0; i<5; i++) {
        if (arr[i] == n) {
            cout << "Found at index " << i;
            break;
        }
    }
    return 0;
}
