#include <iostream>
#include <fstream>
#include "Mark.h"
using namespace std;
using namespace seneca;
int main() {
   ofstream myfile("output.txt");
   ifstream infile("input.txt");
   cout << "OOP244NAA - Oct 14" << endl;
   Mark M;
   cout << "What is the mark?\n> ";
   cin >> M;
   cout << "the mark is: " << M << endl;
   myfile << "the mark is: " << M << endl;
   while (infile) {
      infile >> M;
      if(!infile.fail())
         cout << M << endl;
   }
   return 0;
}