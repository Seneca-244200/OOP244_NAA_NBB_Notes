#include <iostream>
using namespace std;
/// <summary>
/// Draws a line with specific length and character to fill
/// </summary>
/// <param name="fill">char</param>
/// <param name="length">integer</param>
void line(char fill, int length);

void line(char fill);
void line();
void line(int len);
int main() {
   int i = 5;
   cout << "OOP244NAA - Sep23" << endl;
   line('-', 20);
   line('*');
   line();
   line(40);
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
   line('=');
}
void line(int len) {
   line('=', len);
}