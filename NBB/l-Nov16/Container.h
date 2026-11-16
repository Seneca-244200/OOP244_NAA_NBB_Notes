#ifndef SENECA_CONTAINER_H
#define SENECA_CONTAINER_H
#include <iostream>
namespace seneca {
   class Container {
      int m_value{};
   public:
      int value() const;
      Container() = default;
      Container(int value);
      Container operator+(const Container& other)const;
      bool operator <(const Container& other) const;
      bool operator >(const Container& other) const;
   };
   std::ostream& operator<< (std::ostream& ostr, const Container& C);
}

#endif // !SENECA_CONTAINER_H
