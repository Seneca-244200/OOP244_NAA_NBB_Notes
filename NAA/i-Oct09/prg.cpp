#include <iostream>
#include "Mark.h"
using namespace std;
using namespace seneca;
int main() {
   clog.setstate(ios::failbit);
   cout << "OOP244NAA - Oct 09" << endl;
   Mark M = 20.34678, N = 50, S;
   S = N + M; // Mark Mark::operator+(const Mark& other)const
   N.print() << endl;
   M.print() << endl;
   S.print() << endl;
   S = N + 34.5;
   N.print() << endl;
   M.print() << endl;
   S.print() << endl;

   return 0;
}