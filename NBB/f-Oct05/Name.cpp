
#include <iostream>
#include "Name.h"
#include "cstr.h"
using namespace std;
namespace seneca {
   bool Name::isEmpty()const {
      return m_name == nullptr || m_name[0] == 0;
   }
   // initialization routines
   Name::Name() {
      m_name = nullptr;
   }
   Name::Name(const char* name) {
      m_name = new char[strlen(name) + 1]; // DMA
      strcpy(m_name, name);
   }
   // end init
   Name::~Name() {
      delete[] m_name;
   }
   const char* Name::get()const {
      return m_name;
   }
   ostream& Name::display(ostream& output)const {
      if (!isEmpty()) {
         output << m_name;
      }
      return output;
   }
   Name& Name::set(const char* name) {
      delete[] m_name; // because m_name may have data
      m_name = nullptr;
      if (name && name[0]) {
         m_name = new char[strlen(name) + 1]; // DMA
         strcpy(m_name, name);
      }
      return *this;
   }
   Name& Name::add(const char* name) {
      if (name) {
         resize(m_name, strlen(m_name) + strlen(name) + 1);
         // resize(char*& cstr = m_name, size_t newSize = strlen(m_name) + strlen(name) + 1);
         strcat(m_name, name);
      }
      return *this;
   }
   istream& Name::read(istream& input) {
      char thename[128];
      input.getline(thename, 128);
      set(thename);
      return input;
   }
}