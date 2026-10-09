#include <iostream>
#include "Mark.h"
using namespace std;
using namespace seneca;
void PassOrFail(const Mark& mark) {
   if (!mark) {   // bool Mark::operator!()const
      cout << "Fail!";
   }
   else {
      cout << "Pass!";
   }
   cout << endl;
}
int main() {
   clog.setstate(ios::failbit);
   cout << "OOP244NAA - Oct 09" << endl;
   Mark M = 20.34678, N = 49, S;
   PassOrFail(N);
   S = ++N; // Mark& Mark::operator++();
   PassOrFail(N);
   N.print() << endl;
   S.print() << endl;

   return 0;
}