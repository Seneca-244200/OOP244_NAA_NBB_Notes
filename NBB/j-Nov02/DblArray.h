#ifndef SENECA_DBLARRAY
#define SENECA_DBLARRAY
namespace seneca {
   class DblArray {
      double* m_data{};
      unsigned m_size{};
      DblArray& resize(unsigned newSize);
   public:
      DblArray() = default;
      DblArray(unsigned size);
      //either prevent it:
      //DblArray(const DblArray& other) = delete;
      // or implement it:
      DblArray(const DblArray& other);
      DblArray& operator=(const DblArray& other);
      ~DblArray();
      // query
      unsigned size()const;
      const double& operator[](unsigned index)const;
      operator bool()const;
      // modifier
      double& operator[](unsigned index);
      
   };

}
#endif // !SENECA_DBLARRAY


