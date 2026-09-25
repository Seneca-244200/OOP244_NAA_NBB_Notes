#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
const size_t MaxNames = 50;

void wipeAll(char* arr[], size_t size) {
   for (size_t i = 0; i < size; i++) {
      delete[] arr[i];
   }
}

char* getDynamicName() {
   char temp[128];
   cin.getline(temp, 128);
   char* dynName = new char[strlen(temp) + 1];
   strcpy(dynName, temp);
   return dynName;
}

int main() {
   char* stNames[MaxNames]{};
   size_t size{};
   cout << "How many students\n>";
   cin >> size;
   cout << "Enter student names:\n";
   for (size_t i = 0; i < size; i++) {
      cout << (i + 1) << "> ";
      stNames[i] = getDynamicName();
   }
   // sort the names and display....

   wipeAll(stNames, MaxNames);
   return 0;
}