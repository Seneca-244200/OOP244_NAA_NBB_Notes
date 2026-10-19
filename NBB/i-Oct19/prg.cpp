#include <iostream>
using namespace std;

int getInt(const char* prompt = nullptr) {
   int num{};
   bool done = false;
   if (prompt) cout << prompt;
   do {
      cin >> num;
     // if (cin.fail()) { // if fail
     // if (!cin) {  // if fail
      if(cin){ // if everything good!
         done = true;
      }
      else {
         cin.clear();
         cin.ignore(10000, '\n');
         cout << "Invalid integer" << endl;
      }
   } while (!done);
   return num;
}


int main() {
   cout << "OOP244 NBB - OCT 19" << endl;
   int a = 10, b = 20;
   cout << a << " " << b << endl;
   a = getInt("A: ");
   cout << "B: ";
   cin >> b;
   cout << a << " " << b << endl;
   return 0;
}