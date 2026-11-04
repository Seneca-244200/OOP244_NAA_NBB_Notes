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
   DblArray E(10);
   DblArray D;
   prnDblArray(E, "E");//prnDblArray(DblArray A = E, const char* arrName = "E");
   for (int i = 0; i < 10; i++) {
      E[i] = (i + 1) * 1.2345;
   }
   D = E;
   prnDblArray(D, "E");
   E[20] = 123.45;
   prnDblArray(E, "E");
   return 0;
}