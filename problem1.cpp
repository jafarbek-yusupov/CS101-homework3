#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int gap = 0;
    for(int i=n; i>0; i--) {
        for(int j=1; j<=i; j++){
            cout << j;
        }
        int gap = (n-i)*2;
        while(gap--){
            cout << " ";
        }
        for(int g=i; g>0; g--) {
            cout << g;
        }
        cout << endl;
    }
    return 0;
}
