#include <iostream>
#include <fstream>
using namespace std;

int main() {
   cout << "OOP244NAA - Oct16" << endl;
   int a{ 20 };
   cout << "*";
   cout << a << endl;
   cout << "*";
   cout.width(20);
   cout << a << "*" << endl;
   cout << "*";
   cout.width(20); // next output
   cout.fill('-'); // permenent
   cout << a << "*" << endl;
   cout << "*";
   cout.fill('-'); // permenent
   cout << a << "*" << endl;

   cout << "*";
   cout.width(20); // next output
   cout.setf(ios::left); // perm
   cout.fill('-'); // permenent
   cout << a << "*" << endl;
   cout.unsetf(ios::left); // perm

   cout << "*";
   cout.width(20); // next output
   cout.setf(ios::right);
   cout.fill('-'); // permenent
   cout << a << "*" << endl;
   cout.unsetf(ios::right); // perm

   cout << "*";
   cout.width(20); // next output
   cout.setf(ios::left);
   cout.fill('-'); // permenent
   cout << a << "*" << endl;
   cout.unsetf(ios::left); // perm


   return 0;
}