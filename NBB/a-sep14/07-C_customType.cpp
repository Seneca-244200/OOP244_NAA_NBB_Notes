#include <iostream>
using namespace std;
struct Coord {
   int x;
   int y;
};
void print(Coord* c) {
   cout << c->x << " " << c->y << endl;
}
int main() {
   Coord a;
   a.x = 10;
   a.y = 20;
   print(&a);
   return 0;
}