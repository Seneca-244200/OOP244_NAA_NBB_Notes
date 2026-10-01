#include <iostream>
#include "Bar.h"
#include "cstr.h"
using namespace std;
namespace seneca {
   void Bar::init() {
      m_title = nullptr;
      m_fill = '-';
      m_num = 10;
   }
   Bar::Bar() {
      init();
   }
   Bar::~Bar() {
      delete[] m_title;
   }
   Bar::Bar(size_t num) {
      init();
      set('-', num);
   }
   Bar::Bar(char fill, size_t num, const char* title) {
      init();
      set(fill, num, title);
   }
   void Bar::set(char fill, size_t num, const char* title) {
      if (fill == '-' || fill == '=' || fill == '_') {
         m_fill = fill;
      }
      else {
         m_fill = '-';
      }
      if (num <= 70) {
         m_num = num;
      }
      else {
         m_num = 70;
      }
      delete[] m_title;
      if (title) {
         m_title = new char[strlen(title) + 1];
         strcpy(m_title, title);
      }
      else {
         m_title = nullptr;
      }
   }

   size_t Bar::length()const {
      return m_num;
   }
   void Bar::draw()const {
      if (m_title) cout << m_title << endl;
      for (size_t i = 0; i < m_num; i++) {
         cout << m_fill;
      }
      cout << endl;
   }

}