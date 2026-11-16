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

template <typename heehee>
heehee sum(heehee a, heehee b) {
   return a + b;
}

//overload is always preferred to template
Container sum(Container a, Container b) {
   return a.add(b);
}


int main() {
   Container C = 20, D = 10, E;
   int i = 100, j = 200, k;
   double m = 10.10, n = 30.30, o;
   cout << "OOP244NBB Online lecture - Nov 16" << endl;
   E = sum(C, D);
   cout << E << endl;
   k = sum(i, j);
   cout << k << endl;
   o = sum(m, n);
   cout << o << endl;
   return 0;
}