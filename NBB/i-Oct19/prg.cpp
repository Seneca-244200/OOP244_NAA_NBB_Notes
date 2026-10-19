#include <iostream>
#include <fstream>
using namespace std;
int main() {
   ofstream floatFile("output.txt");
   floatFile << "OOP244 NBB - OCT 19" << endl;
   double a{ 12.567892342342423 };
   floatFile.setf(ios::fixed);
   floatFile.precision(3);
   floatFile << "*";
   floatFile << a;
   floatFile << "*" << endl;;


   floatFile << "*";
   floatFile.width(20); // next print will be in 10 spaces
   floatFile << a;
   floatFile << "*" << endl;;

   floatFile << "*";
   floatFile.width(20); // next print will be in 10 spaces
   floatFile.fill('.'); // all the spaces for all prints from now on will be dots.
   floatFile << a;
   floatFile << "*" << endl;;

   floatFile << "*";
   floatFile.width(20); // next print will be in 10 spaces
   floatFile.fill(' '); // back to spaces for fill
   floatFile << a;
   floatFile << "*" << endl;;

   floatFile << "*";
   floatFile.width(10); // next print will be in 10 spaces
   floatFile.fill('.'); // all the spaces for all prints from now on will be dots.
   floatFile.setf(ios::left); // all prints in width will be left justified
   floatFile << a;
   floatFile << "*" << endl;
   floatFile.unsetf(ios::left);

   floatFile << "*";
   floatFile.width(20); // next output
   floatFile.setf(ios::right);
   floatFile.fill('-'); // permenent
   floatFile << a << "*" << endl;
   floatFile.unsetf(ios::right);

   floatFile << "*";
   floatFile.width(20); // next output
   floatFile.setf(ios::left);
   floatFile.fill('-'); // permenent
   floatFile << a << "*" << endl;
   floatFile.unsetf(ios::left);
   return 0;
}