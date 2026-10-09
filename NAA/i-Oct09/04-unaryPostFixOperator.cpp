#include <iostream>
#include "Mark.h"
using namespace std;
using namespace seneca;

int main() {
   clog.setstate(ios::failbit);
   cout << "OOP244NAA - Oct 09" << endl;
   Mark M = 20.34678, N = 49, S;
   N.print() << endl;
   S.print() << endl;

   S = N++; // Mark Mark::operator++(int);

   N.print() << endl;
   S.print() << endl;

   return 0;
}