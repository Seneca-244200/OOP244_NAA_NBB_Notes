#pragma once
#ifndef SENECA_BAR_H
#define SENECA_BAR_H
namespace seneca {
   class Bar {
   private:
      char* m_title;
      char m_fill;
      size_t m_num;
      void init();
   public:
      Bar(); // default or no argument constructor
      ~Bar();
      Bar(size_t num); // one argument constructor
      Bar(char fill, size_t num, const char* title = nullptr);// constructor
      //setters, Modifier, Mutators
      void set(char fill, size_t num, const char* title = nullptr);
      // getters, Queries
      size_t length()const;
      void draw()const;
   };


}
#endif // !SENECA_BAR_H


