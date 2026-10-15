class Foo;
class Faa;
#include <iostream>
using namespace std;
void main() {
   int a;
   Foo B, C;
   Faa F;
   
   B += a;   // unknownType Foo::operator+=(int other);
             // unknownType operator+=(Foo& left, int right);

   if (B) {    // Foo::operator bool()const;
      //something
   }

   C = ~B;  // Foo& Foo:operator~()<const?>;

   if (~B) {  // bool Foo:operator~()const;

   }
                       //ret operator<<( left, right);
   cout << B << endl; //ostream& operator<<(ostream& left,const Foo& right);

   cin >> B >> a; // istream& operator>>(istream&  left, Foo& right);

}