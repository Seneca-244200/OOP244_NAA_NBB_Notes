#include <iostream>
using namespace std;

void printDoubles(const double vals[], int size) {
   for (int i = 0; i < size; i++) {
      cout << vals[i];
      if (i != size - 1) cout << ", ";
   }
   cout << endl;
}
double average(const double nums[], int size) {
   double av{};
   for (int i = 0; i < size; i++) {
      av += nums[i];
   }
   return av / size;
}
int main() {
   int size = 0;
   cout << "this program calculates average of double number\n"
      "Please enter the number of doubles:\n> ";
   cin >> size;
   double* nums = new double[size];
   if (nums) {
      cout << "Please enter the values:" << endl;
      for (int i = 0; i < size; i++) {
         cout << (i + 1) << "> ";
         cin >> nums[i];
      }
      cout << "the number are\n";
      printDoubles(nums, size);
      cout << "The average is: " << average(nums, size);
   }
   delete[] nums;
   return 0;
}