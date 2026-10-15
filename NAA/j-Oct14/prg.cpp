// this will crash unless you implement the resize in DblArray

#include <iostream>
#include <fstream>
#include "DblArray.h"
using namespace std;
using namespace seneca;

void printarray(const DblArray& A) {
   for (int i = A.size() - 1; i >= 0; i--) {
      cout << A[i] << " ";
   }
   cout << endl;
}

int main() {

   cout << "OOP244NAA - Oct 14" << endl;
   DblArray D(20);
   for (int i = 0; i < D.size(); i++) {
      D[i] = i * 4.234;
   }

   printarray(D);

   return 0;
}