#include <iostream>
#include "Mark.h"
using namespace seneca;
using namespace std;
int main() {
   cout << "OOP244NBB - Oct09" << endl;
   Mark M = 25.234;// the same as Mark M(25) or Mark M{25}
   M.print() << endl;
   cout << "Please enter the mark:\n> ";
   M.read();
   cout << "The mark is: ";
   M.print() << endl;
   return 0;
}