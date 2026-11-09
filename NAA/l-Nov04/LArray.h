#ifndef SENECA_LARRAY_H
#define SENECA_LARRAY_H
namespace seneca {
   class LArray {
      long* m_data{};
      unsigned m_size{};
      LArray& resize(unsigned newSize);
   public:
      LArray() = default;
      ~LArray();
      LArray(unsigned size);
      // you can choos to prevent copying
      // LArray(const LArray& other) = delete;
      // or implement the copy constructor
      LArray(const LArray& other);
      // you can choose to prevent it: 
      // LArray& operator=(const LArray& other) = delete;
      // or to implement it:
      LArray& operator=(const LArray& other);
      // queries
      unsigned size()const;
      const long& operator[](unsigned index)const;
      operator bool()const; // if the object is in a valid state
      // modifier
      long& operator[](unsigned index);
   };
}

#endif // !SENECA_LARRAY_H


