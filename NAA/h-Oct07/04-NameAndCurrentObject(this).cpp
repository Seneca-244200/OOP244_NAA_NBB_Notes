
#include <iostream>
#include "Name.h"
using namespace seneca;
using namespace std;
int main() {
   cout << "OOP244NAA - Oct07" << endl;
   // assignment at the moment of creation is initialization that is a call to the one argument contructor:

   Name N = "Whatever", M("Something");
   N.display() << endl;
   M.set("Jane Doe").display() << endl;
   N.set("Fred").append(" ").append("Soley").display() << endl;
   return 0;
}