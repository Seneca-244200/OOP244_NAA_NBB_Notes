#include <iostream>
using namespace std;
void heehaw(int a, double b);
int main() {
   double a, b;
   int i;
   cout << "OOP" << 244 << " - Sep" << 16 << "th" << endl;
   cout << "Enter two numbers\n> ";
   cin >> a >> b;
   cout << "Enter the number of reps\n> ";
   cin >> i;
   for (int j = 0; j < i; j++) {
      cout << j+1 <<": The numbers are " << a << " and " << b << endl;
   }
   heehaw(i, b);
   return 0;
}
