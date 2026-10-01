#include <iostream>
using namespace std;
// class is private by default
// struct is public by default
class Bar {
private:
   char m_fill;
   size_t m_num;
public:
   //setters, Modifier, Mutators
   void set(char fill, size_t num) {
      if (fill == '-' || fill == '=' || fill == '_') {
         m_fill = fill;
      }
      else {
         m_fill = '-';
      }
      if (num <= 70) {
         m_num = num;
      }
      else {
         m_num = 70;
      }
   }
   // getters, Queries
   size_t lenght()const {
      return m_num;
   }
   void draw()const {
      for (size_t i = 0; i < m_num; i++) {
         cout << m_fill;
      }
      cout << endl;
   }
};

int main() {
   cout << "OOP244NAA - Sep 30" << endl;
   Bar b;
   b.set('=', 40);
   b.draw();
   return 0;
}