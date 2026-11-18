#include <iostream>
using namespace std;
class Line;
class Name {
   // whatever
   // public:   // this removed to enforce Line's ownership
   Name(const char theName[]);
   friend class Line;// if I want name to be only "owned" by Line
};
class Person {
   size_t m_age{ 10 };
   Name m_name{ "joe" };
public:
   Person();
   Person(size_t len);

};
Person::Person():m_name("No Name")  {// initialization section overrides the inline initialization
}
Person::Person(size_t len) : m_len(len), m_name("Something") {

}
int main() {
   cout << "OOP244NAA - Nov11" << endl;
   Person P1;
   return 0;
}