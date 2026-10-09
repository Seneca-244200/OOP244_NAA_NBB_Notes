#include <iostream>
#include "Name.h"
using namespace seneca;
using namespace std;
int main() {
   cout << "OOP244NAA - Oct07" << endl;
   Name N;
   cout << "What is your name?\n> ";
   N.read();

   cout << "Hello ";
   N.display() << endl;
   N.display(clog) << endl;
   return 0;
}
