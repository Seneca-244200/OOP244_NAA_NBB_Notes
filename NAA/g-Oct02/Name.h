// This code is incomplete
#ifndef SENECA_NAME_H
#define SENECA_NAME_H
namespace seneca {
   class Name {
      // a c-string keeping the name information
      char* m_info;
   public:
      Name();
      Name(const char* info);
      ~Name();
      void set(const char* info);
      void append(const char* info);
      const char* get()const;
      bool isEmpty()const;
      void display()const;
   };
}
#endif

