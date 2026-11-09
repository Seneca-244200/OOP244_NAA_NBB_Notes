#include "LArray.h"
namespace seneca {
   LArray& LArray::resize(unsigned newSize) {
      if (newSize) {
         long* new_data = new long[newSize] {};
         for (unsigned i = 0; i < newSize && i < m_size; i++) {
            new_data[i] = m_data[i];
         }
         delete[] m_data;
         m_size = newSize;
         m_data = new_data;
      }
      else {
         delete[] m_data;
         m_data = nullptr;
         m_size = 0;
      }
      return *this;
   }
   LArray::~LArray() {
      delete[] m_data;
   }

   LArray::LArray(unsigned size) {
      if (size) {
         m_data = new long[m_size = size] {};
      }
   }

   //LArray::LArray(const LArray& other) {
   //   if (other) { // if the other is not empty
   //      m_data = new long[m_size = other.size()] {};
   //      for (unsigned i = 0; i < m_size; i++) {
   //         m_data[i] = other[i];
   //      }
   //   }
   //}

   LArray::LArray(const LArray& other) {
      // first make sure all pointers all null
      operator=(other);
   }
   LArray& LArray::operator=(const LArray& other) {
      if (this != &other) { // prevent self copying
         delete[] m_data;
         m_data = nullptr;
         m_size = 0;
         if (other) { // if the other is not empty
            m_data = new long[m_size = other.size()] {};
            for (unsigned i = 0; i < m_size; i++) {
               m_data[i] = other[i];
            }
         }
      }
      return *this;
   }

   unsigned LArray::size() const {
      return m_size;
   }

   const long& LArray::operator[](unsigned index) const {
      return m_data[index % m_size];
   }

   LArray::operator bool() const {
      return m_data != nullptr;
   }

   long& LArray::operator[](unsigned index) {
      if (index >= m_size) resize(index + 1);
      return m_data[index];
   }

}