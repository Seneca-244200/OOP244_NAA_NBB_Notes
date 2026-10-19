#include <iostream>
#include <fstream>
using namespace std;
class Student {
   char m_name[128]{};
   int m_subNo{};
   double m_balance{};
public:
   istream& read(istream& file) {
      file.getline(m_name, 128, ',');
      file >> m_subNo;
      if (file.get() != ',')
         file.setstate(ios::failbit);
      file >> m_balance;
      file.ignore(100000, '\n');
      return file;
   }
   ostream& print(ostream& ostr)const {
      if (m_name[0]) {
         ostr << m_name << "-" << m_subNo << " " << m_balance;
      }
      return ostr;
   }
};
istream& operator>>(istream& left, Student& S) {
   return S.read(left);
}
int main() {
   cout << "OOP244NAA - Oct16" << endl;
   Student S;
   ifstream myfile("input.txt");
   while (myfile >> S) {
      S.print(cout) << endl;
   }
   return 0;
}