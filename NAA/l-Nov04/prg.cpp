#include <iostream>
#include "LArray.h"
using namespace std;
using namespace seneca;
void prn(const LArray& A, const char* name = nullptr) {
   if (name) cout << name << ":\n";
   if (A) {
      for (unsigned i = 0; i < A.size(); i++) {
         cout << A[i] << " ";
      }
      cout << endl;
   }
}
int main() {
   cout << "OOP244NAA - Nov 04" << endl;
   LArray M(10);
   LArray L(20);
   LArray& Ref = M;
   for (unsigned i = 0; i < M.size(); i++) {
      M[i] = (i + 1) * 123L;
   }
   prn(M, "M Array");
   L = M;
   prn(L, "L Array");
   M = Ref;
   prn(Ref, "Ref Array");
   cout << "This is right before the end" << endl;

   return 0;
}