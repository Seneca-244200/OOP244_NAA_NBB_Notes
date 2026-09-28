/*
struct is class that is public by default
classes are private by default
*/
#include <iostream>
#include "Bar.h"
using namespace std;
using namespace seneca;
int main() {
   cout << "OOP244NBB - Sep28" << endl;
   // assignment at the moment of creation is a call to one argument constructor
   Bar B = "Intial title"; // Bar B("Intial title");
   Bar A;
   int val(100); // int val = 100;

   B.print();
   B.set(30, '-', "Cost");
   // B.m_fill = '+'; // will cause error becaue m_fill is private
   B.print();
   cout << "the fill characteris '" << B.fill() << "'" << endl;
   B.fill('+');
   B.print();
   B.fill('=');
   {
      Bar X(50, '=', "the X bar");
      X.print();
   }
   B.set("Count");
   B.print();



   return 0;
}