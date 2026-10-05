// This code is incomplete
#include "Name.h"
#include "cstr.h"
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

   void Name::set(const char* info) {
      aloCopy(m_info, info);
   }

   void Name::append(const char* info) {
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
   }


}

