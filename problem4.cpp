#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    if (n <= 2)    cout << 1 << endl;
    else {
        n -= 2;
        int floorNumber = (n + x - 1) / x + 1;
        cout << floorNumber << endl;
    }
    return 0;
}
