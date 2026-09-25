#include <iostream>
#include <cstring>
using namespace std;
struct Student {
   char name[51];
   size_t stno;
   double gpa;
};
int main() {
   cout << "OOP244NAA - SEP 25" << endl;
   int* i{};
   Student* p = new Student;
   i = new int;
   *i = 123;
   cout << *i << endl;

   strcpy(p->name, "Fred Soley");


   delete i;
   delete p;
   return 0;
}