#include <iostream>
using namespace std;

int getInt(const char* prompt = nullptr) {
   int num{};
   if (prompt) cout << prompt;
   cin >> num;

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