#include <iostream>
using namespace std;
int main() {
   cout << "OOP244NAA - Oct07" << endl;

   int a[500] = {/*some values*/ };
   int cnt{};
   for (int i = 0; i < 500; i++) {
      (a[i] > 10) && (cnt++);
   }

   return 0;
}