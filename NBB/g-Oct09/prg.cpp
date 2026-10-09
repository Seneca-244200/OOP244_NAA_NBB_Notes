#include <iostream>
#include "Mark.h"
using namespace seneca;
using namespace std;
int main() {
   cout << "OOP244NBB - Oct09" << endl;
   // turnging clog off
   clog.setstate(ios::failbit);
   Mark M = 10, N = 49; 
   M = N++; //  Mark Mark::operator++(int);
   N.print() << endl;
   M.print() << endl;

   return 0;
}