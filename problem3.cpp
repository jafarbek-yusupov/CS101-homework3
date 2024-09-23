#include <iostream>
using namespace std;

int sod(int n){ // sum of digits
    int sum=0;
    while(n>0){
       sum += n%10;
       n/=10;
    }
    return sum;
}

int main(){
    int n, a, b, sum=0;
    cin >> n >> a >> b;
    for(int i=1; i<=n; i++){
        if(sod(i)>=a && sod(i)<=b)  sum +=i;
    }
    cout << sum << endl;
    return 0;
}
