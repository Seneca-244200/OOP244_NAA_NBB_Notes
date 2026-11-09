#include <iostream>
#include "LArray.h"
using namespace std;
using namespace seneca;
void prn( LArray A, const char* name = nullptr) {
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
   for (unsigned i = 0; i < M.size(); i++) {
      M[i] = (i + 1) * 123L;
   }
   prn(M, "M Array");
   // void prn( LArray A = M , const char* name  "M Array") {
   M[20] = 123456L;
   prn(M, "M Array after setting M[20] to a value");
   return 0;
}