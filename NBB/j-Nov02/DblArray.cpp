#include "DblArray.h"
namespace seneca {
   DblArray& DblArray::resize(unsigned newSize) {
      if (newSize) {
         double* newData = new double[newSize] {};
         for (unsigned i = 0; i < m_size && i < newSize;i++) {
            newData[i] = m_data[i];
         }
         delete[] m_data;
         m_data = newData;
         m_size = newSize;
      }
      else {
         delete[] m_data;
         m_data = nullptr;
         m_size = 0;
      }
      return *this;
   }
   DblArray::DblArray(unsigned size) {
      if (size) {
         m_data = new double[m_size = size] {};
      }
   }
   DblArray::DblArray(const DblArray& other) {
      if (other) { // if the other has data
         m_data = new double[m_size = other.size()];
         for (unsigned i = 0; i < m_size; i++) {
            m_data[i] = other[i];
         }
      }
      // first make sure the data and size are null and zero
      // operator=(other);

   }
   DblArray& DblArray::operator=(const DblArray& other) {
      if (this != &other) {
         delete[] m_data;
         m_data = nullptr;
         m_size = 0;
         if (other) { // if other has data (operator book is define!!!!)
            m_data = new double[m_size = other.size()];
            for (unsigned i = 0; i < m_size; i++) {
               m_data[i] = other[i];
            }
         }
      }
      return *this;
   }
   DblArray::~DblArray() {
      delete[] m_data;
   }
   unsigned DblArray::size() const {
      return m_size;
   }
   const double& DblArray::operator[](unsigned index) const {
      return m_data[index % m_size];
   }
   DblArray::operator bool()const {
      return m_data != nullptr;
   }
   double& DblArray::operator[](unsigned index) {
      if (index >= m_size) resize(index + 1);
      return m_data[index];
   }
}