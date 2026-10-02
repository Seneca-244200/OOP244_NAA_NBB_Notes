// This code is not tested yet
#pragma once
#ifndef SENECA_NAME_H
#define SENECA_NAME_H
namespace seneca {
   class Name {
      char* m_name;
   public:
      Name();
      Name(const char* name);
      ~Name();
      bool isEmpty()const;
      void set(const char* name);
      void add(const char* name);
      const char* get()const;
      void display(bool goToNewline = false)const;
   };
}
#endif // !SENECA_NAME_H


