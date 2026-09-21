#include "pointer.h"
#include <iostream>
using namespace std;
int main() {
   cout << "OOP244 NBB - Sep 21" << endl;
   int val = 10;
   int Pointer p = AddressOf val;
   cout << TargetOf p << endl;
   return 0;
}

