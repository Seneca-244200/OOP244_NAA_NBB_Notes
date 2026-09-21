#include <iostream>
using namespace std;
void line(char fill, int len);
void line(char fill);
void line();
void line(int len);

int main() {
   cout << "OOP244 NBB - Sep 21" << endl;
   line('-', 40);
   line('=');
   line();
   line(20);
   return 0;
}

void line(char fill, int len) {
   for (int i = 0; i < len; i++) {
      cout << fill;
   }
   cout << endl;
}
void line(char fill) {
   line(fill, 70);
}
void line() {
   line('_');
}
void line(int len) {
   line('_', len);
}