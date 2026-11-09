#include <iostream>
#include "LArray.h"
using namespace std;
using namespace seneca;
void prn(const LArray& L, const char* name = nullptr) {
   if (name) cout << name << ":\n";
   if (L) {
      for (unsigned i = 0; i < L.size(); i++) {
         cout << L[i] << " ";
      }
      cout << endl;
   }
}
int main() {
   cout << "OOP244NAA - Nov 04" << endl;
   LArray L;
   LArray M(10);
   for (unsigned i = 0; i < M.size(); i++) {
      M[i] = (i + 1) * 123L;
   }
   prn(L, "L Array");
   prn(M, "M Array");
   M[20] = 123456L;
   prn(M, "M Array after setting M[20] to a value");
   return 0;
}