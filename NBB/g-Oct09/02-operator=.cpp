#include <iostream>
#include "Mark.h"
using namespace seneca;
using namespace std;
int main() {
   cout << "OOP244NBB - Oct09" << endl;
   // turnging clog off
   clog.setstate(ios::failbit);
   Mark M, N;
   M.print() << endl;
   N = M = 75; // M.operator=(75);

   M.print() << endl;
   N.print() << endl;
   return 0;
}