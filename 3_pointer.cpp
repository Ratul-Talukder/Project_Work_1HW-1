#include <iostream>
using namespace std;

int main() {

   int x, y; cin >> x >> y;

   cout << "Before Swap:\n";
   cout << "X = " << x << '\n' << "Y = " << y << '\n';

   int* ptr1 = &x;
   int* ptr2 = &y;

   int temp = *ptr1;

   *ptr1 = *ptr2;
   *ptr2 = temp;

   cout << "After Swaping:\n";
   cout << "X = " << x << '\n' << "Y = " << y << '\n';
    
   return 0;
}