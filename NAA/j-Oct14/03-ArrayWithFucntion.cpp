#include <iostream>
#include <fstream>
#include "DblArray.h"
using namespace std;
using namespace seneca;
int main() {

   cout << "OOP244NAA - Oct 14" << endl;
   DblArray D(20);
   for (int i = 0; i < D.size(); i++) {
      D.element(i) = i * 4.234;
   }

   for (int i = D.size() - 1; i >= 0; i--) {
      cout << D.element(i) << " ";
   }
   cout << endl;

   return 0;
}