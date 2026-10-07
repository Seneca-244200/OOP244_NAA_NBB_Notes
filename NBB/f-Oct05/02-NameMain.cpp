
#include <iostream>
#include "Name.h"
using namespace std;
using namespace seneca;
int main() {
   cout << "OOP244 NBB - Oct05" << endl;
   Name N;
   cout << "Your name please\n> ";
   N.read();
   N.display() << endl;  // by defaut cout
   N.display(clog) << endl; // printing on clog now
   N.add(" Black").display() << endl;
   N.set("Jack white");
   N.display() << endl;
   return 0;
}