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
      // bin operator overload with sideeffect    (Mark Res, M, N;)
                                          
      Mark& operator=(double value);      // [Res = ]M = 85.45;
      Mark& operator+=(double value);     // [Res = ]M += 85.45;
      Mark& operator+=(const Mark& other); // [Res =]M += N;
      // bin operator overload without sideeffect
      Mark operator+(const Mark& other)const; // Res = M + N;
      Mark operator+(double value)const;   // Res = M + 85.45;
      // unary operator prefix with sideffect
      Mark& operator++();    // Res = ++M;
      // unary operator prefix with no sideeffect
      bool operator!()const;   // if(!M){}  bool res = !M;
      // uriary opertor post fix with sideeffect (++ , --)
      Mark operator++(int);  // Res = M++;

      // type conversion, type cast overload
      operator bool()const;     // if(M){}
      operator double()const;   // double mark = M;

      std::ostream& print(std::ostream& ostr = std::cout)const;
      std::istream& read(std::istream& istr = std::cin);
      // never use freinds, always add a query
      //friend Mark operator+(double left, const Mark& M);
   };

   Mark operator+(double left, const Mark& M);
   // iostream overloads
   std::ostream& operator<<(std::ostream& left, const Mark& right);
   std::istream& operator>>(std::istream& left, Mark& right);


}
#endif // !SENECA_MARK_H


