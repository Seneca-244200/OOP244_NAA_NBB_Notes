// This code is incomplete
#ifndef SENECA_NAME_H
#define SENECA_NAME_H
#include <iostream>
// not allowed to: using namespace std;
namespace seneca {
   class Name {
      // a c-string keeping the name information
      char* m_info;
   public:
      // special functions
      Name();
      Name(const char* info);
      ~Name();
      // setters, mutators
      Name& set(const char* info);
      Name& append(const char* info);
      // queries, getters
      const char* get()const;
      bool isEmpty()const;
      std::ostream& display(std::ostream& output = std::cout)const;
      std::istream& read(std::istream& input = std:: cin);
   };
}
#endif

