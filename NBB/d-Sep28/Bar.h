#pragma once
#ifndef SENECA_BAR_H
#define SENECA_BAR_H
#include <cstddef>
namespace seneca {
   class Bar {
   private:
      size_t m_length{};
      char m_fill{};
      char* m_title{};
      void set();
   public:
      //Bar();   // no arg constructor or default constructor
      Bar() = default; // request the compile to create an empty one for you
      Bar(const char* title);
      Bar(size_t length, char fill, const char title[]);
      ~Bar();
      // setter, modifier, mutator
      void fill(char fillchar);
      void set(size_t length, char fill, const char title[]);
      void set(const char* title);
      // query, getter
      char fill()const;
      bool valid()const;
      void clear();
      void print()const;
   };

}
#endif // !SENECA_BAR_H


