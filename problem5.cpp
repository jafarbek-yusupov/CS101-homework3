#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int count = 0;
    int num = 1;
    while (true) {
        if (num % 3 != 0 && num % 10 != 3) {
            count++;
        }
        if (count == N) {
            cout << num << endl;
            break;
        }
        num++;
    }
    return 0;
}
