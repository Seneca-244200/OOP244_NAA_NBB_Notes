/*
struct is class that is public by default
classes are private by default
*/
#include <iostream>
using namespace std;
class Bar {
private:
   size_t m_length{};
   char m_fill{};
   char m_title[21]{};
   bool m_valid = true;
public:
   // setter, modifier, mutator
   void fill(char fillchar);
   void set(size_t length, char fill, const char title[]);
   // query, getter
   char fill()const;
   bool valid()const;
   void print();
};




// setter, modifier, mutator
void Bar::fill(char fillchar) {
   if (fillchar == '-' || fillchar == '_' || fillchar == '=') {
      m_fill = fillchar;
      m_valid = true;
   }
   else
      m_valid = false;
}
// query, getter
char Bar::fill()const { // const protects the class so it is not changed by mistake
   return m_fill;
}
bool Bar::valid()const {
   return m_valid;
}
void Bar::print() {
   if (m_valid) {
      cout << m_title << endl;
      for (int i = 0; i < m_length; i++) {
         cout << m_fill;
      }
      cout << endl;
   }
   else {
      cout << "Invalid bar!" << endl;
   }
}
void Bar::set(size_t length, char fill, const char title[]) {
   int i;
   m_length = length;
   m_fill = fill;
   // strcpy:
   for (i = 0; title[i]; i++) m_title[i] = title[i];
   m_title[i] = 0;
}



int main() {
   cout << "OOP244NBB - Sep28" << endl;
   Bar B;
   B.set(30, '-', "Cost");
   // B.m_fill = '+'; // will cause error becaue m_fill is private
   B.print();
   cout << "the fill characteris '" << B.fill() << "'" << endl;
   B.fill('+');
   B.print();
   B.fill('=');
   B.print();

   return 0;
}