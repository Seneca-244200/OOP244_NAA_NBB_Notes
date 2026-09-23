#include <iostream>
using namespace std;
/*Types:
integers:
bool  (true, false)
char
short
int
long
long long

floating points
float  
double 0.0000012304567      123.4567     1234.5678
long double








*/



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
   return 0;
}
