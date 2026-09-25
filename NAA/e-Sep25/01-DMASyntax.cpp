#include <iostream>
using namespace std;
struct Student {
   char name[51];
   size_t stno;
   double gpa;
};
int main() {
   cout << "OOP244NAA - SEP 25" << endl;
   int* nums{}; 

   nums = new int[500];
   if (nums == nullptr) {
      // allocation has failed
   }
   else {
      // now i have an array of 500 integers called nums;

      // do my work with the DMA


      
      delete[] nums; // this gives back the memory to the OS
   }
   return 0;
}