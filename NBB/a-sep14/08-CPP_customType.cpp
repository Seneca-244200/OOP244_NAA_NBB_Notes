#include <iostream>
using namespace std;
struct Coord {
   int x;
   int y;
   void print() {
      cout << "x: " << x << ", y: " << y << endl;
   }
};
int main() {
   Coord a, b = { 50, 100 };
   a.x = 10;
   a.y = 20;
   a.print();
   b.print();
   return 0;
}