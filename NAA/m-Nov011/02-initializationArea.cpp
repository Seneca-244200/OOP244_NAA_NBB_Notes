#include <iostream>
using namespace std;
class Name {
   // whatever
   //public:   // this removed to enforce Person's ownership
   Name(const char theName[]);
   friend class Person; // Name is owned by Person and Person needs Name to exist
};
class Person {
   size_t m_age{ 10 };
   Name m_name{ "joe" };
public:
   Person() = default;
   // explicit  Person(size_t age); Initialization will not be considered as one-arg constructor and causes an error
   // line 26 will cause error
   Person(size_t age);
   Person(size_t age, const char* name);

};
//Person::Person(size_t age) :m_age(age) {}
Person::Person(size_t age) :m_age{ age } {}
Person::Person(size_t age, const char* name): m_age(age),m_name(name) {
}
int main() {
   cout << "OOP244NAA - Nov11" << endl;
   Person P1;
   Person P2 = 55;
   Person P3(55);
   Person P4{ 55 };
   Person P5(42, "Jack");
   Person P6{ 66, "Jane" };
   Person P7 = { 22, "Joe" };
   return 0;
}