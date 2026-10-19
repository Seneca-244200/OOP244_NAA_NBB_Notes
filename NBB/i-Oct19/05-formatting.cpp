#include <iostream>

using namespace std;
int main() {
   cout << "OOP244 NBB - OCT 19" << endl;
   int a{ 20 };
   cout << "*";
   cout << a;
   cout << "*" << endl;;


   cout << "*";
   cout.width(10); // next print will be in 10 spaces
   cout << a;
   cout << "*" << endl;;

   cout << "*";
   cout.width(10); // next print will be in 10 spaces
   cout.fill('.'); // all the spaces for all prints from now on will be dots.
   cout << a;
   cout << "*" << endl;;

   cout << "*";
   cout.width(10); // next print will be in 10 spaces
   cout.fill(' '); // back to spaces for fill
   cout << a;
   cout << "*" << endl;;

   cout << "*";
   cout.width(10); // next print will be in 10 spaces
   cout.fill('.'); // all the spaces for all prints from now on will be dots.
   cout.setf(ios::left); // all prints in width will be left justified
   cout << a;
   cout << "*" << endl;
   cout.unsetf(ios::left);

   cout << "*";
   cout.width(20); // next output
   cout.setf(ios::right);
   cout.fill('-'); // permenent
   cout << a << "*" << endl;
   cout.unsetf(ios::right);

   cout << "*";
   cout.width(20); // next output
   cout.setf(ios::left);
   cout.fill('-'); // permenent
   cout << a << "*" << endl;
   cout.unsetf(ios::left);
   return 0;
}