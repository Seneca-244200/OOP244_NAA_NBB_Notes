// what is wrong with this code?
#include <iostream>
class Mark {
   int m_value;
public:
   Mark(int value = 0) {
      m_value = value;
   }
   Mark& operator=(int value) {
      m_value = value;
      return *this;
   }
   Mark& operator=(const Mark& other) {
      m_value = other.m_value;
      return *this;
   }
   Mark& operator+=(int value) {
      m_value += value;
      return *this;
   }
   Mark& operator+=(const Mark& other) {
      return operator+=(other.m_value);
   }
   std::ostream& print(std::ostream& output = std::cout) {
      return output << m_value;
   }

   Mark operator+(const Mark& other)const {
      Mark theSum(m_value + other.m_value);
      return theSum;
   }

};



using namespace std;
int main() {
   cout << "OOP244NAA - Oct07" << endl;
   Mark sum, a = 50, b = 40 ;
   b = 20;
   sum = a + b;
   a.print() << endl;
   b.print() << endl;
   sum.print() << endl;
   return 0;
}