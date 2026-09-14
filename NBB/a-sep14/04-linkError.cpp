#include <iostream>
using namespace std;
void foo();
int main() {
   double i, j;
   cout << "Enter two numbers\n> ";
   cin >> i >> j;
   cout << "two number are " << i << " and " << j << endl;
   foo();// link error
   return 0;
}