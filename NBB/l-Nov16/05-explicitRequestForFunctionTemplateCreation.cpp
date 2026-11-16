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
   Container operator+(const Container& other)const {
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


int main() {
   Container C = 20, D = 10, E;
   int i = 100, j = 200, k;
   double m = 10.10, n = 30.30, o;
   long L;
   cout << "OOP244NBB Online lecture - Nov 16" << endl;
   E = sum(C, D);
   cout << E << endl;
   k = sum(i, j);
   cout << k << endl;
   o = sum(m, n);
   cout << o << endl;
   o = sum<int>(j, n); // call the integer version
   cout << o << endl;
   o = sum<double>(j, n); // call the double version
   cout << o << endl;
   L = sum<long>(m, n); // call the double version
   cout << L << endl;
   return 0;
}