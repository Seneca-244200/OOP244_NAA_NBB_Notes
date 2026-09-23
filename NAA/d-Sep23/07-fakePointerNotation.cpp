#include "pointer.h"
#include <iostream>
using namespace std;
// these are no C stuff, they are defined in pointer.h for teaching
int main() {
   cout << "OOP244NAA - Sep23" << endl;
   double a;
   double Pointer p;
   p = AddressOf a;
   TargetOf p = 123.456;
   cout << a << endl;
   cout << TargetOf p << endl;
   return 0;
}
