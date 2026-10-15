#include "DblArray.h"
namespace seneca {
   DblArray::DblArray(size_t size) {
      if (size < 1) size = 1;
      m_data = new double[size];
      m_size = size;
   }
   DblArray::~DblArray() {
      delete[] m_data;
   }
   size_t DblArray::size() const {
      return m_size;
   }
   //double& DblArray::element(size_t index) {
   double& DblArray::operator[](size_t index) {
      if (index >= m_size) resize(index);
      return m_data[index];
   }
   const double& DblArray::operator[](size_t index)const {
      return m_data[index % m_size];
   }
}