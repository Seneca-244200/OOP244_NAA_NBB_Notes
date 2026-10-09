#include <iostream>
#include "Mark.h"
using namespace std;
namespace seneca {
   const Mark& Mark::correctValue(double& value) const{
      if (value < 0.0) value = 0.0;
      if (value > 100.0) value = 100.0;
      return *this;
   }
   Mark::Mark(double value) {
      correctValue(value);
      m_value = value;
      clog << "Mark(" << m_value << ")" << endl;
   }

   Mark::~Mark() {
      clog << "~Mark(" << m_value << ")" << endl;
   }

   Mark& Mark::operator=(double value) {
      m_value = value;
      correctValue(m_value);
      return *this;
   }

   Mark& Mark::operator+=(double value) {
      m_value += value;
      correctValue(m_value);
      return *this;
   }

   Mark& Mark::operator+=(const Mark& other) {
      return operator+=(other.m_value);
   }

   /*Mark Mark::operator+(const Mark& other) const {
      Mark sum(m_value + other.m_value);
      return sum;
   }*/
   Mark Mark::operator+(const Mark& other) const {
      return Mark(m_value + other.m_value);
   }

   Mark Mark::operator+(double value) const {
      return Mark(m_value + value);
   }

   std::ostream& Mark::print(std::ostream& ostr) const {
      ostr.setf(ios::fixed);
      ostr.precision(2);
      ostr << m_value;
      ostr.unsetf(ios::fixed);
      return ostr;
   }
   std::istream& Mark::read(std::istream& istr) {
      istr >> m_value;
      correctValue(m_value);
      return istr;
   }
}