#include <iostream>
using namespace std;
void foo(int a, double b) {
   double sum = 0;
   sum = a + b;
   cout << sum << endl;
}

int main() {
   int i = 20;
   double d = 40.12;
   cout << "OOP244NAA - Sep23" << endl;
   foo(i, 1.23); // foo(int a= i, double b = 1.23);
   foo(10, d); // foo(int a = 10, double b = d);
   foo(i, d);
   foo(20, 1.234);
   return 0;
}