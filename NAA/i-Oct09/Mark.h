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

      Mark& operator++();      // prefix ++
      bool operator!()const;

      Mark operator++(int);  // postfix ++

      operator bool()const;
      operator double()const;

      std::ostream& print(std::ostream& ostr = std::cout)const;
      std::istream& read(std::istream& istr = std::cin);
      // never use freinds, always add a query
      //friend Mark operator+(double left, const Mark& M);
   };

   Mark operator+(double left, const Mark& M);
}
#endif // !SENECA_MARK_H


