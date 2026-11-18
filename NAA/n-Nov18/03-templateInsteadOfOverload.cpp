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
   // binary operator+ with no sideffect: a = b + c;  // a b and c are containers
   Container operator+(const Container& other)const {
      return Container(m_value + other.value());
   }
};
ostream& operator<< (ostream& ostr, const Container& C) {
   return ostr << "Container(" << C.value() << ")";
}


/// <summary>
/// returns the sum of two objects by applying + operator
/// type must implement operator+ with another type
/// type must support copy construction and destructor
/// </summary>
/// <typeparam name="type"></typeparam>
/// <param name="a"></param>
/// <param name="b"></param>
/// <returns></returns>
template <typename type>
type sum(type a, type b) {
   return a + b;
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
   return 0;
}