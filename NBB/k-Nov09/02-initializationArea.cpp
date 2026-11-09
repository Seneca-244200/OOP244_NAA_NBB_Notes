#include <iostream>
using namespace std;
class Line;
class Name {
   // whatever
   // public:   // this removed to enforce Line's ownership
   Name(const char theName[]);
   friend class Line;// if I want name to be only "owned" by Line
};
class Line {
   size_t m_len{ 10 };
   Name m_name{ "joe" };
public:
   Line();
   Line(size_t len);

};
Line::Line():m_name("No Name")  {// initialization section overrides the inline initialization
}
Line::Line(size_t len) : m_len(len), m_name("Something") {

}
int main() {
   cout << "OOP244NBB - Nov09" << endl;
   Line L1;
   return 0;
}