#include "Mark.h"
namespace seneca {
   const Mark& Mark::correctValue(double& value) const{
      if (value < 0.0) value = 0.0;
      if (value > 100.0) value = 100.0;
      return *this;
   }
   Mark::Mark(double value) {
      correctValue(value);
      m_value = value;
   }
}