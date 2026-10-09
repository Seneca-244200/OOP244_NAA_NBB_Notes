#include <iostream>
#include "Mark.h"
using namespace seneca;
using namespace std;
int main() {
   cout << "OOP244NBB - Oct09" << endl;
   // turnging clog off
   clog.setstate(ios::failbit);
   Mark M = 10, N= 50, S;
   S = M += N; // Mark& Mark::operator+=(const Mark& other)
   S.print() << endl;

   M = N += 40;

   M.print() << endl;

   return 0;
}