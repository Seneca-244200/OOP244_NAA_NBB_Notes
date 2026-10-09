#include <iostream>
#include "Mark.h"
using namespace std;
using namespace seneca;
int main() {
   cout << "OOP244NAA - Oct 09" << endl;
   //Mark M(20), N(50), S;
   //Mark M{ 20 }, N{ 50 }, S;
   Mark M = 20.34678, N = 50, S;
   S.print()<<endl;
   S = 34.56; // Mark& Mark::operator=(double)
   S.print()<< endl;
   M += 10; // M.operator+=(10);
   M.print() << endl;
   S = N += M; // N.operator+=(M);
   N.print()<< endl;
   S.print() << endl;
   return 0;
}