#include <iostream>
#include <fstream>
using namespace std;
class Employee {
   char m_name[128]{};
   int m_empID{};
   double m_salary{};
public:
   // Fred Soley,123456,12345.67<ENTER>
   istream& read(istream& istr) {
      istr.getline(m_name, 128, ',');
      istr >> m_empID;
      if (istr.get() != ',')//manually setting the state of istream to fail if the data is not 
                            // a match to my business logic
         istr.setstate(ios::failbit);
      istr >> m_salary;
      if (istr.get() != '\n')
         istr.setstate(ios::failbit);
      return istr;
   }
   ostream& print(ostream& ostr)const {
      if (m_name[0]) {
         ostr << m_name << ": (" << m_empID << " $" << m_salary <<")";
      }
      return ostr;
   }
};
istream& operator>>(istream& left, Employee& right) {
   return right.read(left);
}
ostream& operator<<(ostream& left,const Employee& right) {
   return right.print(left);
}
int main() {
   cout << "OOP244 NBB - OCT 19" << endl;
   Employee E;
   ifstream empFile("input.txt");
   while (empFile >> E) {
      cout << E << endl;
   }
   return 0;
}