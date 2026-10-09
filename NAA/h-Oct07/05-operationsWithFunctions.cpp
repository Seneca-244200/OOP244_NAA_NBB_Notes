#include <iostream>
class Mark {
   int m_value;
public:
   Mark(int value = 0) {
      m_value = value;
   }
   Mark& set(int value) {
      m_value = value;
      return *this;
   }
   Mark& set(const Mark& other) {
      m_value = other.m_value;
      return *this;
   }
   Mark& add(int value) {
      m_value += value;
      return *this;
   }
   Mark& add(const Mark& other) {
      m_value += other.m_value;
      return *this;
   }
   std::ostream& print(std::ostream& output = std::cout) {
      return output << m_value;
   }

   Mark& sum(const Mark& other)const {
      Mark theSum(m_value + other.m_value);
      return theSum;
   }

};



using namespace std;
int main() {
   cout << "OOP244NAA - Oct07" << endl;
   Mark m = 57, n = 10;
   Mark sum, a(50), b(40);
   m.add(20);
   m.print() << endl;
   m.add(n);
   m.print() << endl;
   for (int i = 0; i < 5; i++) {
      m.add(1);
   }
   m.print() << endl;
   sum = a.sum(b);
   cout << "sum of ";
   a.print() << " and ";
   b.print() << " is ";
   sum.print() << endl;
  
   return 0;
}