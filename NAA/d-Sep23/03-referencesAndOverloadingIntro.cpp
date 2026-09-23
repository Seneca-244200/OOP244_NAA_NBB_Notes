#include <iostream>
using namespace std;
void addTen(int& a) {
   a += 10;
}
void addTen(int* a) {
   (*a) += 10;
}

int main() {
   int i = 5;
   cout << "OOP244NAA - Sep23" << endl;
   addTen(i); // addTen(int& a = i);
   cout << i << endl;
   addTen(&i); // addTen(int* a = &i);
   cout << i << endl;
   return 0;
}