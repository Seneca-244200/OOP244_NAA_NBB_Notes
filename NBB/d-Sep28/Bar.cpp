#include <iostream>
#include "Bar.h"
#include "cstr.h"
using namespace std;
namespace seneca {
   void Bar::set() {
      m_length = 70;
      m_fill = '-';
      m_title = nullptr;
   }
   /*Bar::Bar() {
      set();
   }*/
   Bar::Bar(const char* title) {
      set();
      set(title);
   }
   Bar::Bar(size_t length, char fill, const char title[]) {
      set(length, fill, title);
   }
   Bar::~Bar() {
      delete[] m_title;
   }
   // setter, modifier, mutator
   void Bar::fill(char fillchar) {
         m_fill = fillchar;
      
   }
   // query, getter
   char Bar::fill()const { // const protects the class so it is not changed by mistake
      return m_fill;
   }
   bool Bar::valid()const {
      return (m_fill == '-' || m_fill == '_' || m_fill == '=')
         &&
         (m_length >= 0 && m_length <= 70);
   }
   void Bar::clear() {
      m_fill = '-';
      m_length = 0;
      delete[] m_title;
      m_title = nullptr; // extremly important
   }
   void Bar::print() const{
      if (valid()) {
         if (m_title) {
            cout << m_title << endl;
         }
         for (int i = 0; i < m_length; i++) {
            cout << m_fill;
         }
         cout << endl;
      }
      else {
         cout << "Invalid bar!" << endl;
      }
   }
   void Bar::set(size_t length, char fill, const char title[]) {
      m_length = length;
      m_fill = fill;
      set(title);
   }

   void Bar::set(const char* title) {
      delete[] m_title;
      m_title = new char[strlen(title) + 1];
      strcpy(m_title, title);
   }


}
