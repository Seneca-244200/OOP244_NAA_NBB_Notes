#include <iostream>
#include "Mark.h"
using namespace std;
using namespace seneca;

int main() {
   clog.setstate(ios::failbit);
   cout << "OOP244NAA - Oct 09" << endl;
   Mark M = 20.34678, N = 49, S;
   S = N++; // Mark Mark::operator++(int);

   N.print() << endl;
   S.print() << endl;

   if (N) {
      N.print() << " is a pass" << endl;
   }

   cout << double(N) << endl;
   cout << double(M) << endl;
   return 0;
}