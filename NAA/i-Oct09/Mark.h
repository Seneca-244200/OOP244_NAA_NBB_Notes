#ifndef SENECA_MARK_H
#define SENECA_MARK_H
#include <iostream>
namespace seneca {
   class Mark {
      double m_value;
      const Mark& correctValue(double& value)const;
   public:
      Mark(double value = 0);
      ~Mark();
      Mark& operator=(double value);
      Mark& operator+=(double value);
      Mark& operator+=(const Mark& other);
      Mark operator+(const Mark& other)const;
      Mark operator+(double value)const;
      std::ostream& print(std::ostream& ostr = std::cout)const;
      std::istream& read(std::istream& istr = std::cin);
   };
}
#endif // !SENECA_MARK_H


