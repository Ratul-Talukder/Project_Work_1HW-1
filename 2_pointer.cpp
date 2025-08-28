#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter the elements of the array: \n";
    for (int i = 0; i < n; ++i) cin >> arr[i];

    int maximum = arr[0];
    int minimum = arr[0];

    for (int i = 0; i < n; ++i) {
        if (arr[i] > maximum) maximum = arr[i];
        if (arr[i] < minimum) minimum = arr[i];
    }

    cout << "Maximum Number is: " << maximum << '\n';
    cout << "Minimum Number is: " << minimum << '\n';

    delete[] arr;

    return 0;
}