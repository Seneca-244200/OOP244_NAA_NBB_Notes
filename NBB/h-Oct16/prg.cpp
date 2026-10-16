#include <iostream>
#include <fstream>
#include "Mark.h"
using namespace std;
using namespace seneca;

int main() {
   ofstream outfile("output.txt");
   ifstream infile("input.txt");
   clog.setstate(ios::failbit);
   Mark M = 99.9;
   outfile << "OOP244NBB- Oct 16" << endl;
   outfile << "the mark is " << M << endl;
   while (infile) {
      infile >> M;
      if(infile)
         cout << M << endl;
   }
   return 0;
}