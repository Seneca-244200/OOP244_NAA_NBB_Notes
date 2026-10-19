#include <iostream>
using namespace std;
int getInt(const char* prompt = nullptr) {
   int num{};
   bool done = false;
   if (prompt) cout << prompt;
   do {
      cin >> num;
      if (cin.fail()) {
         cin.clear();
         cin.ignore(10000, '\n');
         cout << "Bad integer, retry:\n> ";
      }
      else if (cin.get() != '\n') {
         cin.ignore(100000, '\n');
         cout << "Only an integer please:\n> ";
      }
      else{
         done = true;
      }
   } while (!done );
   return num;
}
int main() {
   cout << "OOP244NAA - Oct16" << endl;
   int a = 10, b = 20;
   a = getInt("Please enter the value for A\n> ");
   cout << "B: ";
   b = getInt();
   cout << "a: " << a << ", b: " << b << endl;
   return 0;
}