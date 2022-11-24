#include <iostream>
using namespace std;

int main(){

    int n, i, a, b, c;
    cin >> n;
    a=1;
    b=1;
    cout << a << endl << b << endl;
        for (i=0; i<=n; i=i+a){
            c=a+b;
            a=b;
            b=c;
            cout << c << endl;
        }
    }
