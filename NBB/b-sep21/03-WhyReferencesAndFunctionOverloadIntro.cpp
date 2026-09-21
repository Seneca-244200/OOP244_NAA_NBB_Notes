#include <iostream>
using namespace std;

void addTen(int& a) {
   a += 10;
}

void addTen(int* a) {
   (*a) += 10;
}

int main() {
   int x = 123;
   cout << "OOP244 NBB - Sep 21" << endl;
   addTen(x); // addTen(int& a = x);
   cout << x << endl;
   addTen(&x); // addTen(int* a = &x);
   cout << x << endl;
   return 0;
}