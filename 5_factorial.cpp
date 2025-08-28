#include <iostream>
using namespace std;


long long fact(long long n) {

    long long ans = 1;

    for (int i = n; n > 1; --i) ans *= i;

    return ans;

}

int main() {


    long long n; cin >> n;

    cout << "Factorial of " << n << " is: " << fact(n);

    return 0;
}