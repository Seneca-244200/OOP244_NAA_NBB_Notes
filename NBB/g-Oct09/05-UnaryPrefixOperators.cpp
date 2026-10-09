#include <iostream>
#include "Mark.h"
using namespace seneca;
using namespace std;
void failedOrPass(const Mark& M) {
   M.print();
   if (!M) { // bool Mark::operator!()const;
      cout << " is a Fail" << endl;
   }
   else {
      cout << " is a Pass" << endl;
   }

}
int main() {
   cout << "OOP244NBB - Oct09" << endl;
   // turnging clog off
   clog.setstate(ios::failbit);
   Mark M = 10, N = 49; 
   failedOrPass(N);
   M = ++N; //  Mark& Mark::operator++();
   failedOrPass(N);
   N.print() << endl;
   M.print() << endl;

   return 0;
}