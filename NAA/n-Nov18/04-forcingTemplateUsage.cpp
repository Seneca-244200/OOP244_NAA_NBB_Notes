#include <iostream>
using namespace std;
class Container {
   int m_value{};
public:
   int value() const {
      return m_value;
   }
   Container() = default;
   Container(int value) :m_value(value) {};
   Container add(const Container& other)const {
      return Container(m_value + other.value());
   }
};
ostream& operator<< (ostream& ostr, const Container& C) {
   return ostr << "Container(" << C.value() << ")";
}

template <typename type>
type sum(type a, type b) {
   return a + b;
}

Container sum(Container A, Container B) {
   return A.add(B);
}


int main() {
   Container C = 20, D = 10, E;
   int i = 100, j = 200, k;
   short x = 10, y = 20, z;
   double m = 123.4, n = 234.56, o;
   cout << "OOP244NAA- Nov 18" << endl;

   E = sum(C, D);
   cout << E << endl;
   k = sum(i, j);
   cout << k << endl;
   o = sum(m, n);
   cout << o << endl;
   z = sum(x, y);
   cout << z << endl;
   m = sum<double>(i, n);  // will force the compiler to use double version of sum
   cout << m << endl;
   k = sum<int>(i, n);     // will force the compiler to use int version of sum
   cout << k << endl;
   return 0;
}