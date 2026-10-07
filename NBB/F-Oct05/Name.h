
#pragma once
#ifndef SENECA_NAME_H
#define SENECA_NAME_H
#include <iostream>
namespace seneca {
   class Name {
      char* m_name;
   public:
      // constructors
      Name();
      Name(const char* name);
      //destructor
      ~Name();
      // mutators, (setters)
      Name& set(const char* name);  // ???
      Name& add(const char* name);
      // works with terminal
      std::istream& read(std::istream& input = std::cin);
      // queries
      bool isEmpty()const;
      const char* get()const;
      //works with terminal
      std::ostream& display(std::ostream& output = std::cout) const;
   };
}
#endif // !SENECA_NAME_H


