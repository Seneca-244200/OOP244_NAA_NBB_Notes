#ifndef SENECA_MARK_H
#include <iostream>
namespace seneca {
   class Mark {
      double m_value;
      const Mark& correctValue(double& value)const;
   public:
      Mark(double value = 0);
      std::ostream& print(std::ostream& ostr = std::cout)const;
      std::istream& read(std::istream& istr = std::cin);
      ~Mark();
      // operator overloads
      // void operator=(double value);
      Mark& operator=(double value);
      // as practice overload the following:
      // Mark& operator=(char grade);
      // Mark& operator=(const char* grade);
      Mark operator+(const Mark& other)const;
      Mark operator+(double value)const;
      Mark& operator+=(const Mark& other);
      Mark& operator+=(double value);
      Mark& operator++();
      Mark operator++(int);
      bool operator!()const;
   };
}
#endif // !SENECA_MARK_H


