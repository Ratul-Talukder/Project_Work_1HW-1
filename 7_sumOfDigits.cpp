#include <iostream>
using namespace std;


int digitSum(int n) {

    int ans = 0;

    while (n) {

        ans += (n % 10);
        n /= 10;
    }

    return ans;
}
int main() {

    int n; cin >> n;

    cout << "The Sum of Digits of " << n << " is: " << digitSum(n);
    

    return 0;
}