// This code is incomplete
#include <iostream>
#include "Name.h"
#include "cstr.h"
using namespace std;
namespace seneca {
   Name::Name() {
      m_info = nullptr;
   }
   Name::Name(const char* info) {
      if (info) { // if info is not null
         // DMA
         m_info = aloChars(strlen(info) + 1);
         strcpy(m_info, info);
      }
      else {
         m_info = nullptr;
      }
   }

   Name::~Name() {
      delete[] m_info;
   }

   Name& Name::set(const char* info) {
      aloCopy(m_info, info);
      return *this;
   }

   Name& Name::append(const char* info) {
      if (info && m_info) {
         char* temp = aloChars(strlen(info) + strlen(m_info) + 1);
         strcpy(temp, m_info);
         strcat(temp, info);
         wipeOut(m_info);
         m_info = temp;
      }
      else if (info) {
         set(info);
      }
      return *this;
   }

   const char* Name::get() const {
      return m_info;
   }

   bool Name::isEmpty() const {
      return m_info == nullptr || m_info[0] == 0;
   }

   ostream& Name::display(std::ostream& output) const {
      if (!isEmpty()) output << m_info;
      return output;
   }

   istream& Name::read(std::istream& input) {
      char tempname[128]{};
      input.getline(tempname, 128);
      set(tempname);
      return input;
   }


}

