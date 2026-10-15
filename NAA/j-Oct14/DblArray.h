#pragma once
#ifndef SENECA_DBLARRAY
#define SENECA_DBLARRAY
namespace seneca {
   class DblArray {
      double* m_data{};
      size_t m_size{};
      // resizes the array (either enlarge or truncates) to new newsize
      DblArray& resize(size_t newsize);
   public:
      DblArray(size_t size = 1);
      ~DblArray();
      size_t size()const;
      //double& element(size_t index);
      double& operator[](size_t index);
      const double& operator[](size_t index)const;
   };
}
#endif // !SENECA_DBLARRAY


