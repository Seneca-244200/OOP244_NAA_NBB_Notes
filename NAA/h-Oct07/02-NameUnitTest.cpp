#include <iostream>
#include "Name.h"
using namespace seneca;
using namespace std;
int main() {
   cout << "OOP244NAA - Oct07" << endl;
   Name N("Joe black"), M;
   N.display() << endl;
   N.set("Jane");
   N.display()<< endl;
   N.append(" ");
   N.append("Doe");
   N.display() << endl;
   M.set("Fred Soley");
   M.display() << endl;
   return 0;
}