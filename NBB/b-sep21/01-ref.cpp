#include <iostream>
using namespace std;

int main() {
   cout << "OOP244 NBB - Sep 21" << endl;
   int i;
   int& r = i;

   cout << (unsigned long long) & r << " " << (unsigned long long) & i << endl;

   i = 10;
   cout << r << endl;

   return 0;
}