#include <iostream>
using namespace std;

bool palindrome(string s) {

    int size = s.size();
    for (int i = 0; i < (size/2); ++i) {

        if (s[i] != s[size-i-1]) return false;
    }

    return true;
}

int main() {


    string s; cin >> s;

    if (palindrome(s)) cout << "This string '" << s << "' is a Palindrome";
    else cout << "This string '" << s << "' is not a Palindrome";

    return 0;
}