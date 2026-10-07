
#include <iostream>

using namespace std;

class Value {
   int m_data{};
public:
   Value(int data = 0) {
      m_data = data;
   }
   std::istream& read(std::istream& input = std::cin) {
      input >> m_data;
      return input;
   }
   std::ostream& display(std::ostream& output = std::cout) {
      output << m_data;
      return output;
   }
   // has side effect
   Value& add(int data) {
      m_data += data;
      return *this;
   }
   // should not have side effect
   Value add(const Value& other)const {
      Value result(m_data + other.m_data);
      return result;
   }

};



int main() {
   Value V,W(40), R;
   cout << "OOP244 NBB - Oct05" << endl;
   cout << "Number\n> ";
   V.read();
   cout << "The number is: ";
   V.display() << endl;
   return 0;
}