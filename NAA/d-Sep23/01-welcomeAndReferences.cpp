#include <iostream>
using namespace std;
int main() {
   cout << "OOP244NAA - Sep23" << endl;
   cout << "intializing a to 10" << endl;
   int a = 10;
   int& r = a;
   cout << "r: " << r << endl;
   cout << "Setting r to 20..." << endl;
   r = 20;
   cout << "a: " << a << endl;
   cout << "a is located at: " << (unsigned long long) &a << endl;
   cout << "r is located at: " << (unsigned long long) &r << endl;
   return 0;
}