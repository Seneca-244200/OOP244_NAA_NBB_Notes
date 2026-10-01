#include <iostream>
#include "Bar.h"
using namespace std;
using namespace seneca;
int main() {
   Bar b, line;
   b.draw();
   line.set('-', 60);
   cout << "OOP244NAA - Sep 30" << endl;
   line.draw();
   b.set('=', 40, "Number of students");
   b.draw();
   return 0;
}