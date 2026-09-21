#include <iostream>
using namespace std;

void foo(int a, double b) {
   int c;
   c = 100;
   cout << (a + b) * c << endl;
}

int main() {
   int x = 10;
   cout << "OOP244 NBB - Sep 21" << endl;
   foo(x, 2.34); // foo(int a = x , double b = 2.34);
   foo(200, 600.3); // foo(int a = 200, b = 600.3);/
   return 0;
}