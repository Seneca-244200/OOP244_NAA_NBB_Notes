#include <iostream>
#include "DblArray.h"
using namespace std;
using namespace seneca;
void prnDblArray(const DblArray& A, const char* arrName) {
   cout << "size of " << arrName << " is " << A.size() << endl;
   for (unsigned i = 0; i < A.size(); i++) {
      cout << A[i] << " ";
   }
   cout << endl;
}

int main() {
   cout << "OOP244NBB - Nov 02" << endl;
   DblArray D;
   DblArray E(10);
   prnDblArray(D, "D");
   prnDblArray(E, "E");
   for (int i = 0; i < 10; i++) {
      E[i] = (i + 1) * 1.2345;
      D[i] = E[i];
   }
   prnDblArray(D, "D");
   prnDblArray(E, "E");
   E[20] = 123.45;
   prnDblArray(D, "D");
   prnDblArray(E, "E");
   return 0;
}