#include <iostream>
#include "Bar.h"
using namespace std;
using namespace seneca;
int main() {
   Bar b('=', 40, "Number of students");
 /*  Bar line(70);
   Bar line{ 70 };*/
   Bar line = 70; // assignment at the moment of create is a call to a one argument constructor
   //Bar b('=', 40);
   //Bar b{ '=', 40, "Number of students" };
   //Bar b{ '=', 40 };
   cout << "OOP244NAA - Sep 30" << endl;
   line.draw();
   b.draw();
   b.set('-', 50, "Number of Employees");
   b.draw();
   double val(2.34);
   cout << val << endl;
   return 0;
}