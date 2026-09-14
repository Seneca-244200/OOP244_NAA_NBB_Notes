// demo_scope.cpp
#include <iostream>
using namespace std;
int value = 25;// global one can be accessed with shadowed!
int main() { 
   int value = 100;           // outer scope

   cout << "Before inner block: value = " << value << endl;

   {
      int value = 200;       // shadows the outer 'value'
      cout << "Inside block:   value = " << value << endl;
      cout << ::value << endl; // this is the global one!
   }

   cout << "After inner block:  value = " << value << endl;  // back to 100
   return 0;
}