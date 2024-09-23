#include <iostream>
using namespace std;

int main(){
    int num, t;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> num;
        while(num>0){
            cout << num%10 << " ";
            num /= 10;
        }
        cout << endl;
    }
    return 0;
}
