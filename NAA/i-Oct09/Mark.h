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
   };
}
#endif // !SENECA_MARK_H


