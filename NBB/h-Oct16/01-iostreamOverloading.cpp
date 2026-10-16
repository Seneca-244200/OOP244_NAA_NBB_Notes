#include <iostream>
#include "Mark.h"
using namespace std;
using namespace seneca;

int main() {
   clog.setstate(ios::failbit);
   cout << "OOP244NBB- Oct 16" << endl;
   Mark M = 50.34;
  /* Mark a = 10.55 + M;  */
   // Mark operator+(double leftArg, const Mark& rightArg);
   cout << "M before reading: " << M << endl;
   cout << "Please enter a mark:\n> ";
   cin >> M; 
   cout << M << endl;
   // ostream& operator<<(ostream& left,const Mark& right);
   return 0;
}