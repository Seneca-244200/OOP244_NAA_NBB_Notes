#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
const size_t MaxLen = 50;
void getNames(char* namesToGetDynamically[], size_t max);
char* getName();
void printNames(char* names[]);
bool yes();
void wipeAll(char* names[]);
int main() {
   char* names[MaxLen]{};
   getNames(names, MaxLen);
   printNames(names);
   wipeAll(names);
   return 0;
}

void getNames(char* names[], size_t max) {
   bool done = false;
   size_t cnt = 0;
   cout << "Start Entering the names:" << endl;
   while (!done) {
      cout << (cnt + 1) << "> ";
      names[cnt++] = getName();
      cout << "Continue? (Y/N)\n> ";
      done = !yes();
   }
}

char* getName() {
   char name[128];
   cin.getline(name, 128);
   char* exactName = new char[strlen(name) + 1];
   strcpy(exactName, name);
   return exactName;
}
void printNames(char* names[]) {
   for (size_t i = 0; names[i] != nullptr && i < MaxLen; i++) {
      cout << names[i] << endl;
   }
}
bool yes() {
   char ch;
   cin >> ch;
   cin.ignore(10000, '\n');// flush
   return ch == 'y' || ch == 'Y';
}
void wipeAll(char* names[]) {
   for (size_t i = 0; i < MaxLen; i++) {
      delete[] names[i];
   }
}