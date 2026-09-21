#include <iostream>
using namespace std;
void line(char fill = '_', int len = 70);

void line(int len);

int main() {
   cout << "OOP244 NBB - Sep 21" << endl;
   line('-', 40);
   line('=');
   line();
   line(20);// default argument values do not work and must be overloaded
   return 0;
}

void line(char fill, int len) {
   for (int i = 0; i < len; i++) {
      cout << fill;
   }
   cout << endl;
}

void line(int len) {
   line('_', len);
}