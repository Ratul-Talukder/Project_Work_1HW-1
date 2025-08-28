#include <iostream>
using namespace std;


void evenOdd(int n) {

    if (n & 1) {
        cout << "The number " << n << " is an Odd number";
    }
    else {
        cout << "The number " << n << " is an Even number";
    }
}

int main() {

    int n; cin >> n;
    evenOdd(n);


    return 0;

}
