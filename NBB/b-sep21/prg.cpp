#include "pointer.h"
#include <iostream>
using namespace std;
void readInts(int* arr, int size) {
   cout << "Enter integers:" << endl;
   for (int i = 0; i < size; i++) {
      cout << (i + 1) << "> ";
      cin >> arr[i];
   }
}
void printInts(const int* arr, int size) {
   for (int i = 0; i < size; i++) {
      cout << arr[i];
      if (i != size - 1) cout << ", ";
   }
   cout << endl;
}
int main() {
   int* size = new int{};
   int* nums = nullptr;
   cout << "OOP244 NBB - Sep 21" << endl;
   cout << "How many integers?\n> ";
   cin >> *size;
   nums = new int[*size] {};
   readInts(nums, *size);
   printInts(nums, *size);
   delete[] nums;
   delete size;
   nums = nullptr;
   size = nullptr;
   // and then code continues
   return 0;
}

